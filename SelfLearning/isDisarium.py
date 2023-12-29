def isDisarium(integer):
    sum = 0
    for i in range (len(str(integer))):
        sum += int(str(integer)[i]) ** (i + 1)
    return sum == integer

user_input = int(input("Enter the number you want to check: "))
result = isDisarium(user_input)
print(result)
