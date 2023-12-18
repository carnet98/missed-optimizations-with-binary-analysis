#!/bin/bash
pip install virtualenv
python3 -m venv virtual_env
source virtual_env/bin/activate
while read line; do
    word=$(echo "$line"  | head -n1 | cut -d " " -f1)
    pip install "$word"
done <requirements.txt