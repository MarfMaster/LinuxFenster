#!/bin/bash

export username=$(id -u -n)
export groups=$(id -G -n)
export comma=","

echo -n "${username}${comma}${groups}" | sed "s/ /${comma}/"
