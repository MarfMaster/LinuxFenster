#!/usr/bin/env python
import sys

none = str("None")
inputstr = str("What was the parameter? ")
reward = str("Good job! Feel great about yourself!")
punishment = str("Nope, sorry... did you hit your head as a kid?")

argument = sys.argv[1:]

if len(argument) == 1:
    typed = input(inputstr)
    if str(typed) == str(argument[0]):
        print(reward)
    else:
        print(punishment)

else:
    print(none)
