L = []
num = int(input("Enter Number: "))
for i in range(1,num // 2 +1):
  if num % i == 0:
    L.append(i)
L.append(num)
if len(L) > 2:
  print(L)
  print("NOT Prime")
else:
  print(L)
  print("Prime Number")
