#!/usr/bin/env python
import sys

liste = list(sys.argv[1:])
reverseListe = liste[::-1]

if len(liste) < 2:
    print("None")
else:
    for x in reverseListe:
        print(x)
