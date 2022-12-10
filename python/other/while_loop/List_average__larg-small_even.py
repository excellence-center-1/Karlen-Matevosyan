even = []
sum = 0
count = 0
L = []
for i in range(5):
  num = int(input("Enter Number For List: "))
  count += 1
  sum += num
  L.append(num)
  if L[i] % 2 == 0:
    even.append(num)
    sort = sorted(L)
print("Default List:",L)
print("Average:",sum / count)
print("Max Number:",max(L))
print("Min Number:",min(L))
print("Two Max Numbers:",sort[-2:])
print("Two Min Numbers:",sort[:2])
print("Even Numbers:",even)
