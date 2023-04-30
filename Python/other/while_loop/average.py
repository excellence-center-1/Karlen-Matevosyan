count = 0
sum = 0
while True:
  temp = float(input("Enter number: "))
  if temp > -301:
    sum += temp
    count += 1
  elif temp < -300:
    temp = 0
    print(sum / count)
    break
