number = int(input("Enter The Number: "))
num_type = input("Enter Type OF Number(In LowerCase): ")
if num_type == 'seconds':
  print(number,"Seconds =",number / 60,"Minute(s)")
elif num_type == 'minutes':
  print(number,"Minutes =",number / 60,"Hour(s)")
elif num_type == 'hours':
  print(number,"Hours =",number / 24,"Day(s)")
else:
  print("Enter Another Type OF Number")
