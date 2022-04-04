from math import gcd

t = int(input())

for i in range(t):
  array = input().split()

  n1 = int(array[0])
  op1 = str(array[1])
  d1 = int(array[2])
  op = str(array[3])
  n2 = int(array[4])
  op2 = str(array[5])
  d2 = int(array[6])

  ans2 = d1 * d2
  if op == "+": ans1 = n1*d2+n2*d1
  elif op == "-": ans1 = n1*d2-n2*d1
  elif op == "*": ans1 = n1 * n2
  else:
    ans1 = n1 * d2
    ans2 = n2 * d1
  mdc = gcd(abs(ans1), abs(ans2))
  print(f'{ans1}/{ans2} = {ans1//mdc}/{ans2//mdc}')
  