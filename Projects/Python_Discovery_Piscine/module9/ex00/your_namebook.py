#!/usr/bin/env python

def array_of_names(buch):
    liste = list()
    for key in buch:
        fname = key.capitalize()
        lname = buch[key].capitalize()
        name = fname + " " + lname
        #name += fname[0].upper() + fname[1:]
        #name += " "
        #name += lname[0].upper() + lname[1:]
        liste.append(name)
    return liste

persons = {
        "jean": "valjean",
        "grace": "hopper",
        "xavier": "niel",
        "fifi": "brindacier"
        }

print(array_of_names(persons))
