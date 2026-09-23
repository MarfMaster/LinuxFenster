#!/usr/bin/env python
import sys

arguments = sys.argv[1:]
argLength = len(arguments)

if argLength > 0:
    print("Parameters: " + str(argLength))
    for x in arguments:
        length = int(len(x))
        print(x + str(": " + str(length)))
else:
    print("None")
