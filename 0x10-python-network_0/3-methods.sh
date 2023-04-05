#!/bin/bash
# Bash script that takes inURL and display all the HTTP methods
curl -sI "$1" | GREP "Allow:" | cut -d' ' -f 2-
