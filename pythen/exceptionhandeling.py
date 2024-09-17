a = int(input("enter a:"))
b= int(input("enter b :"))

try:
    result = a/b    
except ZeroDivisionError:
    result = None
    print("Error : can not divide by zero")

finally:
    print("division operation compleated :",result)