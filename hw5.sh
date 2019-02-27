#!/usr/bin/env bash
#reads directory
read -p "Enter a directory: " dir
wc $dir &> output.txt
python3 hw5.py output.txt
