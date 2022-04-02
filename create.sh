#!/bin/bash

nome=$1
mkdir $nome

touch $nome/index.java
touch $nome/index.cs
touch $nome/index.py
touch $nome/index.js
touch $nome/input.txt

echo "var input = require('fs').readFileSync(__dirname + '/input.txt', 'utf8');" > $nome/index.js
echo "var lines = input.split('\n');" >> $nome/index.js
echo '' >> $nome/index.js
echo 'const re = () => lines.shift();' >> $nome/index.js
echo 'const ri = () => parseInt(re());' >> $nome/index.js
