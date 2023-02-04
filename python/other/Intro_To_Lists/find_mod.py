L = []
counts = {}
while True:
    num = input("Enter Any Numbers: ")
    if num == 'q':
        break
    else:
        L.append(int(num))
if len(L) % 2 == 0:
    extra_num = int(input("Enter One More Number: "))
    L.append(extra_num)
    L.sort()
for i in L:
    if i in counts:
        counts[i] += 1
    else:
        counts[i] = 1
#Get The Key
print([key for key in counts.keys() if counts[key] == max(counts.values())])
print("Sorted List:",L)
print("Middle Element Of List Is:",L[int(len(L)/2)])
