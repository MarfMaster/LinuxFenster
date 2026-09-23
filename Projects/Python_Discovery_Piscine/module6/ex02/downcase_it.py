#!/usr/bin/env python
import sys

liste = list(sys.argv[1:])

if len(liste) != 1:
    print("None")
else:
    print(str(liste[0]).lower())
