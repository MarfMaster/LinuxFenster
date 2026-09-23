#!/usr/bin/env python
import sys

liste = list(sys.argv[1:])

if len(liste) == 0:
    print("None")
else:
    print(liste[0])
