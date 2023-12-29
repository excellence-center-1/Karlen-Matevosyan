def seven_boom(lst):
    for i in lst:
        if '7' in str(lst):
            return 'BOOM'
        else:
            return 'There is no 7 in list'
lst = [1,2,3,4,5,6,7,8,9]
result = seven_boom(lst)
print(result)
