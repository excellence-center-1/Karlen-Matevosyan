L = []
avg = 0
while True:
    num = input("Enter Any Numbers: ")
    if num == "q":
        break
    else:
        L.append(int(num))
        L.sort()
for i in L:
    avg += i / len(L)
print("Sorted List:",L)
print("Middle Element OF List Is:",L[int(len(L)/2)])
print("Average Of List:",avg)