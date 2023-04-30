L = []
count = int(input("Enter Count OF Purchases: "))
for i in range(count):
    items = input("Enter Purchase: ")
    L.append(items)
print(*L,sep='\n')