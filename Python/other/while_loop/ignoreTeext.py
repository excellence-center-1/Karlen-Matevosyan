count = 0
while True:
  text = input("Enter text: ")
  count += 1
  if len(text) <= 0:
    print("Thank You")
    print(count)
    break
