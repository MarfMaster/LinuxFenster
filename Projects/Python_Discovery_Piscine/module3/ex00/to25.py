#!/usr/bin/env python
#!/bin/bash
print("Enter a number lower than 25")
number1 = int(input())
if(number1 > 24):
    print("ERROR")
else:
    i = number1
    while i < 26:
        print("Inside the loop, my variable is " + str(i))
        i += 1
