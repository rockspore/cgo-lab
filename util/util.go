// Package util implements funcs calling C code.
package util

// #cgo CXXFLAGS: -std=c++14
// #include "util.h"
import "C"
import "fmt"

type Metadata struct {
	Name string
}

func Check(ss []string, m Metadata) error {
	cs := C.CString("")
	if len(ss) > 0 {
		cs = C.CString(ss[0])
	}
	cm := C.metadata{name: C.CString(m.Name)}
	if C.go_Check(cs, cm) != 0 {
		return fmt.Errorf("Check failed")
	}
	return nil
}
