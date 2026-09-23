#!/usr/bin/env python

text1 = "Please tell me your age: "

print(text1, end="")

given_age = int(input())

text2 = "You are currently " + str(given_age) + " years old."

print(text2)

i = int(1)
mult = int(10)

while i < 4:
    number = int(i * mult)
    age = int(given_age + number)
    ageText = "In " + str(number) + " years, you'll be " + str(age) + " years old."
    print(ageText)
    i += 1
