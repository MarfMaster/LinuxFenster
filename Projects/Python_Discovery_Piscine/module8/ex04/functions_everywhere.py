#!/usr/bin/env python
import sys

none = "None"
args = sys.argv[1:]
argsAmount = len(args)

def enlarge(string):
    while len(string) < 8:
        if len(string) < 8:
            string += "Z"
        else:
            break
    return string

def shrink(string):
    string = string[:8]
    return string

if argsAmount > 0:
    for x in args:
        if len(x) > 8:
            print(shrink(x))
        elif len(x) < 8:
            print(enlarge(x))
        else:
            print(x)
else:
    print(none)
