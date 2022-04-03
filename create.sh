#!/bin/bash

nome=$1
mkdir $nome

touch $nome/index.java
touch $nome/index.cs
touch $nome/index.py
touch $nome/index.js
touch $nome/input.txt

echo 'using System;' > $nome/index.cs
echo >> $nome/index.cs
echo class $nome { >> $nome/index.cs
echo '  public static void Main(string[] args) {' >> $nome/index.cs
echo >> $nome/index.cs
echo '  }' >> $nome/index.cs
echo '}' >> $nome/index.cs

echo package $nome';' >> $nome/index.java
echo >> $nome/index.java
echo 'import java.util.Scanner;' >> $nome/index.java
echo >> $nome/index.java
echo 'class Main {' >> $nome/index.java
echo '  public static void main(String[] args) {' >> $nome/index.java
echo '    Scanner re = new Scanner(System.in);' >> $nome/index.java
echo >> $nome/index.java
echo >> $nome/index.java
echo >> $nome/index.java
echo '    re.close();' >> $nome/index.java
echo '  }' >> $nome/index.java
echo '}' >> $nome/index.java

echo "var input = require('fs').readFileSync(__dirname + '/input.txt', 'utf8');" > $nome/index.js
echo "var lines = input.split('\n');" >> $nome/index.js
echo >> $nome/index.js
echo '// ----------------' >> $nome/index.js
echo >> $nome/index.js
echo 'const re = () => lines.shift();' >> $nome/index.js
echo 'const ri = () => parseInt(re());' >> $nome/index.js
echo 'const rf = () => parseFloat(re());' >> $nome/index.js
