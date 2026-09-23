#!/usr/bin/env python

text1 = "Give me a number: "

print(text1, end="")

number1 = float(input())

number2 = int(number1)

isNotDecimal = bool(number1 == float(number2))

if isNotDecimal:
    print("This number is an integer.")
else:
    print("This number is a decimal.")
