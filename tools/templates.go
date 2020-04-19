package main

import (
	"bytes"
	"io"
	"os"
	"path"
	"text/template"
)

// Template files
const (
	DefaultTemplatesDir          string = "templates"
	TemplatesDirEnvVariable      string = "TEMPLATES"
	MPHHeaderTemplate            string = "mph_header.tmpl"
	MPHIncludesTemplate          string = "mph_includes.tmpl"
	MPHGTemplate                 string = "mph_g.tmpl"
	MPHCTemplate                 string = "mph_c.tmpl"
	MPHITemplate                 string = "mph_i.tmpl"
	MPHCombinedTemplate          string = "mph_combined.tmpl"
	ContractionsHeaderTemplate   string = "contractions_header.tmpl"
	ContractionsIncludesTemplate string = "contractions_includes.tmpl"
	ContractionsConstsTemplate   string = "contractions_consts.tmpl"
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
	Combined  MPHCombinedType
	Linebreak RangeLinebreakFunc
}

// ContractionsHeaderTags : tags used in contractions switch header template
type ContractionsHeaderTags struct {
	Tool         string
	Unixtime     int64
	Tag          string
	Contractions uint
}

// ContractionsIncludesTags : tags used in contractions includes templates
type ContractionsIncludesTags struct {
	// Nothing here
}

// ContractionsConstsTags : tags used in contractions defines
type ContractionsConstsTags struct {
	TAG          string // tag in uppercase
	Codepoints   uint
	Contractions uint
}

func formatTemplate(filename string, tags interface{}) (string, error) {
	name := path.Base(filename)
	t, err := template.New(name).ParseFiles(filename)
	if err != nil {
		return "", err
	}

	formatted := bytes.Buffer{}
	if err = t.Execute(&formatted, tags); err != nil {
		return "", err
	}

	return formatted.String(), nil
}

func genTemplate(writer io.Writer, template string, tags interface{}) error {
	templateDir := os.Getenv(TemplatesDirEnvVariable)
	if len(templateDir) < 1 {
		templateDir = DefaultTemplatesDir
	}

	templatePath := path.Join(templateDir, template)

	formatted, err := formatTemplate(templatePath, tags)
	if err != nil {
		return err
	}

	writer.Write([]byte(formatted))

	return nil
}

func makeLinebreakFunc(chunkLength uint) RangeLinebreakFunc {
	return func(pos uint) bool {
		return (pos%chunkLength == 0)
	}
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

func genContractionsHeader(writer io.Writer, tags ContractionsHeaderTags) error {
	return genTemplate(writer, ContractionsHeaderTemplate, tags)
}

func genContractionsIncludes(writer io.Writer, tags ContractionsIncludesTags) error {
	return genTemplate(writer, ContractionsIncludesTemplate, tags)
}

func genContractionsConsts(writer io.Writer, tags ContractionsConstsTags) error {
	return genTemplate(writer, ContractionsConstsTemplate, tags)
}
