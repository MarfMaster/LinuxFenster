#!/usr/bin/env python
#!/bin/bash
print("Please enter the first number:")
number1 = int(input())
print("Please enter the second number:")
number2 = int(input())

result = number1 * number2

print(str(number1) + " * " + str(number2) + " = " + str(result))
if result == 0:
    print("The result is both positive and negative.")
elif result > 0:
    print("The result is positive.")
else:
    print("The result is negative.")
