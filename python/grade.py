grade = int (input("Enter number of grade: "))
if type(grade) != int or grade < 0 or grade > 100:
    print ("Enter another numbers of type INT")
elif grade <= 60:
    print ("F")
elif 60 < grade <= 70:
    print ("D")
elif 70 < grade <= 80:
    print ("C")
elif 80 < grade <= 90:
    print ("B")
elif 90 < grade <= 100:
    print ("A")
