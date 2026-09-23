#!/usr/bin/env python

str1 = " is a great scientist born in "
str2 = "."

def famous_births(buch):
    yearToName = dict()
    for key in buch:
        name = str(dict(buch[key])["name"])
        birthyear = str(dict(buch[key])["date_of_birth"])
        yearToName.update({int(birthyear): key})
    sortiert = dict(sorted(yearToName.items()))
    print(sortiert)
    for key in sortiert:
        name = str(dict(buch[sortiert[key]])["name"])
        print(name + str1 + str(key) + str2)

women_scientists = {
        "ada": { "name": "Ada Lovelace", "date_of_birth": "1815" },
        "cecila": { "name": "Cecila Payne", "date_of_birth": "1900" },  
        "lise": { "name": "Lise Meitner", "date_of_birth": "1878" },
        "grace": { "name": "Grace Hopper", "date_of_birth": "1906" }
}

famous_births(women_scientists)
