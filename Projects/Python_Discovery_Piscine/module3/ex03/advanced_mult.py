#!/usr/bin/env python

i1 = int(0)

while i1 < 11:
    sampleText = "Table of " + str(i1) + ": "

    print(sampleText, end="")
    i2 = int(0)

    while i2 < 11:
        print(str(i2 * i1) + " ", end="")
        i2 += 1

    i1 += 1
    print()
