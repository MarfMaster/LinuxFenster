#!/usr/bin/env python
import sys

args = sys.argv[1:]
argsAmount = len(args)

def downcase_it(string):
    string = str(string).lower()
    return string

if argsAmount != 0:
    for x in args:
        print(downcase_it(x))
else:
    print("None")
