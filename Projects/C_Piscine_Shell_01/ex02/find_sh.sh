#!/bin/bash
export files=$(find . -name '*.sh')
echo "${files}" | sed 's:./::g' | sed 's:\.sh::g'
