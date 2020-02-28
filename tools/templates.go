package main

import (
	"bytes"
	"io"
	"os"
	"path"
	"text/template"
	"time"
)

// Template files
const (
	MPHHeaderTemplate   string = "templates/mph_header.tmpl"
	MPHIncludesTemplate string = "templates/mph_includes.tmpl"
	MPHGTemplate        string = "templates/mph_g.tmpl"
	MPHCTemplate        string = "templates/mph_c.tmpl"
	MPHITemplate        string = "templates/mph_i.tmpl"
	MPHCombinedTemplate string = "templates/mph_combined.tmpl"
)

// RangeLinebreakFunc : takes position in range and returns true if linebreak
// has to be added (to template). Used when filling G, I, COMBINED
type RangeLinebreakFunc func(pos uint) bool

// MPHHeaderTags : tags used in MPH header template
type MPHHeaderTags struct {
	Tool           string
	Unixtime       int64
	Tag            string
	Prime          int
	GSize          uint
	CombinedLength uint
	Encoding       string
}

// MPHFooterTags : tags used in MPH footer
type MPHFooterTags struct {
	// Nothing here
}

// MPHIncludesTags : tags used in MPH includes template
type MPHIncludesTags struct {
	// Nothing here
}

// MPHGTags : tags used in MPH G block
type MPHGTags struct {
	Tag       string
	G         []int16
	Linebreak RangeLinebreakFunc
}

// MPHCTags : tags used in MPH C block
type MPHCTags struct {
	Compact   bool
	Tag       string
	C         []uint32
	Linebreak RangeLinebreakFunc
}

// MPHITags : tags used in MPH C block
type MPHITags struct {
	Tag       string
	I         []uint16
	Linebreak RangeLinebreakFunc
}

// MPHCombinedTags : tags used in MPH C block
type MPHCombinedTags struct {
	Tag       string
	COMBINED  []uint8
	Linebreak RangeLinebreakFunc
}

func formatTemplate(filename string, tags interface{}) (string, error) {
	name := path.Base(filename)
	t, err := template.New(name).ParseFiles(filename)
	if err != nil {
		return "", err
	}

	var formatted bytes.Buffer
	if err = t.Execute(&formatted, tags); err != nil {
		return "", err
	}

	return formatted.String(), nil
}

func genTemplate(writer io.Writer, template string, tags interface{}) error {
	formatted, err := formatTemplate(template, tags)
	if err != nil {
		return err
	}

	writer.Write([]byte(formatted))

	return nil
}

func genMPHHeader(writer io.Writer, tags MPHHeaderTags) error {
	return genTemplate(writer, MPHHeaderTemplate, tags)
}

func genMPHIncludes(writer io.Writer, tags MPHIncludesTags) error {
	return genTemplate(writer, MPHIncludesTemplate, tags)
}

func genMPHG(writer io.Writer, tags MPHGTags) error {
	return genTemplate(writer, MPHGTemplate, tags)
}

func genMPHC(writer io.Writer, tags MPHCTags) error {
	return genTemplate(writer, MPHCTemplate, tags)
}

func genMPHI(writer io.Writer, tags MPHITags) error {
	return genTemplate(writer, MPHITemplate, tags)
}

func genMPHCombined(writer io.Writer, tags MPHCombinedTags) error {
	return genTemplate(writer, MPHCombinedTemplate, tags)
}

func makeLinebreakFunc(chunk uint) RangeLinebreakFunc {
	return func(pos uint) bool {
		return (pos%chunk == 0)
	}
}

func main() {
	sink := os.Stdout
	tool, tag := os.Args[0], "NU_GOTOOLS"
	compact := false

	genMPHHeader(sink, MPHHeaderTags{
		Tool:     tool,
		Unixtime: time.Now().Unix(),
		Tag:      tag,
	})
	genMPHIncludes(sink, MPHIncludesTags{})
	genMPHG(sink, MPHGTags{
		Tag:       tag,
		G:         []int16{1, 2, 3, -4, -5, 6, 7},
		Linebreak: makeLinebreakFunc(5),
	})
	genMPHC(sink, MPHCTags{
		Compact:   compact,
		Tag:       tag,
		C:         []uint32{1, 2, 3, 4, 5, 6, 7},
		Linebreak: makeLinebreakFunc(4),
	})
	genMPHI(sink, MPHITags{
		Tag:       tag,
		I:         []uint16{1, 2, 3, 4, 5, 6, 7},
		Linebreak: makeLinebreakFunc(3),
	})
	genMPHCombined(sink, MPHCombinedTags{
		Tag:       tag,
		COMBINED:  []uint8{1, 2, 3, 4, 5, 6, 7},
		Linebreak: makeLinebreakFunc(2),
	})
}
