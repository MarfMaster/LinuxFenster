#!/usr/bin/env python
import sys

args = sys.argv[1:]
argsAmount = len(args)
none = "None"

if argsAmount == 1:
    string = str(args[0])
    found = False
    for x in string:
        if x == "z":
            print("z", end="")
            found = True
    if found == False:
        print(none)
    else:
        print()
else:
    print(none)
