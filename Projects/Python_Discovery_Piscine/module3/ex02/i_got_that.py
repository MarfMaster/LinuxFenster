#!/usr/bin/env python

print("What you gotta say? : ", end="")
text = str(input())
sampleText = "I got that! Anything else? : "
checkText = "STOP"

if text != "":
    while True:
        print(sampleText, end="")
        text = str(input())
        if text == checkText:
            break
