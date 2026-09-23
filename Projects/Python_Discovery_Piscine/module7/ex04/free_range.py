#!/usr/bin/env python
import sys

args = sys.argv[1:]
argsAmount = len(args)
none = "None"

if argsAmount == 2:
    num1 = int(args[0])
    num2 = int(args[1])

    if num1 < num2:
        liste = list(range(num1, num2))
        liste.append(num2)
        print(liste)
    else:
        print(none)
else:
    print(none)
