count = -1
while True:
  temp = float(input("Enter Max Temperature: "))
  count += 1
  if temp >= 22.0:
    break
print("Days After Temperature Riched 22°C are",count)
