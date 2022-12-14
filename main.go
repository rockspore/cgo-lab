// Package main is main.
package main

import "github.com/rockspore/cgo-lab/util"

func main() {
	s := []string{"Foo"}
	m := util.Metadata{Name: "Bar"}
	util.Check(s, m)
}
