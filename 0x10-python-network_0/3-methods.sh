#!/bin/bash
# Bash script that takes inURL and display all the HTTP methods
curl -s -I "${1}" | grep "^Allow: .*" | cut -d " " -f 2-
