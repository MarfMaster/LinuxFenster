#!/usr/bin/env python
#!/bin/bash

print("Please enter a number.")

number1 = int(input())
i = 0

while i < 10:
    result = number1 * i
    print(str(i) + " x " + str(number1) + " = " + str(result))
    i += 1
