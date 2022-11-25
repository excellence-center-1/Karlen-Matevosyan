a = float(input("Enter first number : "))
b = float(input("Enter second number : "))
if abs(round(a-b, 3)) == 0.001:
  print("Close")
else:
  print("Not Close")
