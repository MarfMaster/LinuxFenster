#!/usr/bin/env python

def is_red(string):
    if string == "red":
        return True
    else:
        return False

def find_the_redheads(buch):
    liste = dict(filter(lambda string: string[1] == "red", buch.items())).keys()
    return list(liste)

dupont_family = {
        "florian": "red",
        "marie": "blond",
        "virginie": "brunette",
        "david": "red",
        "franck": "red"
}

print(find_the_redheads(dupont_family))
