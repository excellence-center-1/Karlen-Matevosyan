password = input("Enter Your Password: ")
password2 = input("Enter Your Password Again: ")
if len(password) < 8:
  print("Too Short! ")
elif password2 != password:
  print("Different")
else:
  print("OK")
