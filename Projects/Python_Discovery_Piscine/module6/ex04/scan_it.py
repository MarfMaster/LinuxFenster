#!/usr/bin/env python
import sys
import re

none = str("None")

if len(sys.argv) == 3:
    keyword = sys.argv[1]
    search = sys.argv[2]
    
    amount = int(len(re.findall(keyword, search)))

    if amount == 0:
        print(none)
    else:
        print(amount)
else:
    print(none)
