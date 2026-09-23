#!/usr/bin/env python

liste = [6584, 366334, -515335, 6632, -658631, -65636, -5341, 10, 10]

print("Original list: ", end="")
print(liste)

endSet = set()
for x in liste:
    if x > 5:
        endSet.add(x + 2)

print("New set: ", end="")
print(endSet)
