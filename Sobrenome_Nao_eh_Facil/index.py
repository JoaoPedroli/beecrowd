t = int(input())
ns = ['a', 'e', 'i', 'o', 'u']
for i in range(t):
  p = input()
  cos = 0
  ok = False
  for l in p:
    if l.lower() in ns: cos = 0
    else: cos += 1
    if cos == 3:
      ok = True
      break
  if ok: print(f'{p} nao eh facil')
  else: print(f'{p} eh facil')
