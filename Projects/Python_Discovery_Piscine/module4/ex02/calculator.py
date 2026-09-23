#!/usr/bin/env python

text1 = "Give me the first number: "

print(text1, end="")

num1 = int(input())

text2 = "Give me the second number: "

print(text2, end="")

num2 = int(input())

text3 = "Thank you!"

print(text3)

result1 = int(num1 + num2)
result2 = int(num1 - num2)
result3 = int(num1 / num2)
result4 = int(num1 * num2)

print(str(num1) + " + " + str(num2) + " = " + str(result1))
print(str(num1) + " - " + str(num2) + " = " + str(result2))
print(str(num1) + " / " + str(num2) + " = " + str(result3))
print(str(num1) + " * " + str(num2) + " = " + str(result4))

