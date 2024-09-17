# Name : Prince jaiswal
# Aktu rollno : 230097010097
# Experiment no : 3
# date : 12/9/2024
# find the even odd
a = int(input("Enter year :"))
if(a%400==0 or (a%4==0 and a%100!=0)):
    print("leap year")
else :
    print("not a leap year")