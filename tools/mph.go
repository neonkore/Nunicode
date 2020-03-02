package main

import (
	"sort"
)

// Constants common for entire MPH generation
const (
	MPHPrime            = 0x01000193 // No particular reason, because FVN is not currently used. Should match prime used in _nu_hash().
	MPHInternalEncoding = "UTF-8"    // Internal encoding for COMBINED
)

// MPHGType : G array type
type MPHGType []int16

// MPHV : internal type used to build MPH
type MPHV struct {
	codepoint   uint32 // Perhaps should have been `rune`, but for now keep this as close to generated C code as possible
	replacement uint16
}

// MPHVType : internal type used during MPH creation,
// C and I are coming out of this array, codepoint goes into C,
// replacement goes into I
type MPHVType []MPHV

// MPHCType : codepoints (C) array type
type MPHCType []uint32

// MPHIType : indices (I) array type
type MPHIType []uint16

// MPHCombinedType : COMBINED array type
// This array is build by mph-combined
type MPHCombinedType []uint8

// MPHMapping : source of MPH build
type MPHMapping map[uint32]MPHV

// Calculates a distinct hash function for a given string.
// Each value of the integer d results in a different hash value.
//
// Should loosely match _nu_hash()
func hash(d uint32, codepoint uint32) uint32 {
	if d == 0 {
		d = MPHPrime
	}

	// It doesn't matter for MPH if it's FVN or not until G
	// is correctly filled, therefore simple XOR is enough to produce
	// required randomness while produced index fits into uint16_t.
	//
	// You can consider this as usage of Unicode codepoint as a hash
	// itself, but it need to depend on d to distibute values between
	// buckets

	return (d ^ codepoint)
}

// Easy Perfect Minimal Hashing
//
// Based on:
// By Steve Hanov. Released to the public domain.
// http://stevehanov.ca/blog/index.php?id=119
//
// Based on:
// Edward A. Fox, Lenwood S. Heath, Qi Fan Chen and Amjad M. Daoud,
// "Practical minimal perfect hash functions for large databases",
// CACM, 35(1):105-121
//
// Also a good reference:
// Compress, Hash, and Displace algorithm by Djamal Belazzougui,
// Fabiano C. Botelho, and Martin Dietzfelbinger
//
// ---
//
// Computes a minimal perfect hash table using the given python dictionary.
// It returns a tuple (G, V). G and V are both arrays. G contains the
// intermediate values needed to compute the index of the value in V.
// V contains the values of the incoming dictionary.
func createMPH(mapping MPHMapping) (MPHGType, MPHVType) {
	size := uint32(len(mapping))

	// Step 1: Place all keys into buckets
	buckets := make([][]uint32, size)
	G := make(MPHGType, size)
	V := make(MPHVType, size)

	for key := range mapping {
		bucket := (hash(0, key) % size)
		buckets[bucket] = append(buckets[bucket], key)
	}

	// Step 2: Sort the buckets and process the ones with the most items first
	sort.Slice(buckets, func(i, j int) bool {
		return (len(buckets[i]) > len(buckets[j]))
	})

	lastBucket := 0
	for i, bucket := range buckets {
		// Stop this stage when reaching bucket with length of 1 or 0.
		// Since buckets are sorted, tail of buckets has either buckets with
		// length 1 or 0 (as step 3 expecpects).
		if len(bucket) <= 1 {
			lastBucket = i
			break
		}

		var d uint32 = 1
		slots := []uint32{}

		// Repeatedly try different values of d until we find a hash function
		// that places all items in the bucket into free slots
		for item := 0; item < len(bucket); {
			slot, slotBusy := hash(d, bucket[item])%size, false

			for _, existingSlot := range slots {
				if existingSlot == slot {
					slotBusy = true
					break
				}
			}

			// If slot is already taken, or codepoint is assigned in V,
			// reset item and clear slots, then try another d
			if V[slot].codepoint != 0 || slotBusy {
				item, slots = 0, slots[:0]
				d++
			} else {
				slots = append(slots, slot)
				item++
			}
		}

		G[hash(0, bucket[0])%size] = int16(d)
		for i := 0; i < len(bucket); i++ {
			V[slots[i]] = mapping[bucket[i]]
		}
	}

	// Step 3: Only buckets with 1 item remain. process them more quickly by directly
	// placing them into a free slot. Use a negative value of d to indicate this.
	freelist := []uint32{}
	for i := uint32(0); i < size; i++ {
		if V[i].codepoint == 0 {
			freelist = append(freelist, i)
		}
	}

	for i := lastBucket; i < len(buckets); i++ {
		bucket := buckets[i]
		if len(bucket) < 1 {
			break
		}

		slot := freelist[i-lastBucket]

		// We subtract one to ensure it's negative even if the zeroeth slot was used
		G[hash(0, bucket[0])%size] = int16(-slot - 1)
		V[slot] = mapping[bucket[0]]
	}

	return G, V
}

// Splits generated V into C and I arrays
func splitCodepointsAndIndices(v MPHVType) (MPHCType, MPHIType) {
	size := len(v)
	C := make(MPHCType, size)
	I := make(MPHIType, size)

	for i, entry := range v {
		C[i], I[i] = entry.codepoint, entry.replacement
	}

	return C, I
}
