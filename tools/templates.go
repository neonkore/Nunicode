package main

import (
	"bytes"
	"io"
	"path"
	"text/template"
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
	G         MPHGType
	Linebreak RangeLinebreakFunc
}

// MPHCTags : tags used in MPH C block
type MPHCTags struct {
	Compact   bool
	Tag       string
	C         MPHCType
	Linebreak RangeLinebreakFunc
}

// MPHITags : tags used in MPH I block
type MPHITags struct {
	Tag       string
	I         MPHIType
	Linebreak RangeLinebreakFunc
}

// MPHCombinedTags : tags used in MPH C block
type MPHCombinedTags struct {
	Tag       string
	COMBINED  MPHCombinedType
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

func makeLinebreakFunc(chunkLength uint) RangeLinebreakFunc {
	return func(pos uint) bool {
		return (pos%chunkLength == 0)
	}
}
