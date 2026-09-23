#!/usr/bin/env python
import sys

args = sys.argv[1:]
argsAmount = len(args)
none = "None"

if argsAmount > 0:
    found = False
    for x in args:
        if x.endswith("ism") == False:
            x += "ism"
            print(x)
            found = True
    if found == False:
        print(none)
else:
    print(none)
