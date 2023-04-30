factorial = 1
num = int(input("Enter Number For Factorial: "))
if num == 0:
  print("1")
elif num < 0:
  print("Not Exist For Negative Numbers")
elif num > 0:
  for i in range(1,num+1):
    factorial *= i
print("Factorial OF",num,"is",factorial)
