L = []
count = int(input("Enter Count OF Rows: "))
num = int(input("Enter Number OF Word`s Letter You Want to see: "))
for i in range(count):
    row = input("Enter Row: ")
    for letter in row.split(" "):
        L.append((letter[num-1]))
for j in L:
    print(j,end="")
print()