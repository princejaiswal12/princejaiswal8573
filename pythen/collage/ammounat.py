a=float(input("enter the number"))
if(a<=100):
    print(a)
elif(a>100 and a<=200):
    print("amount is :",(a-100)*5)
else:
    print("amount is :", ((100)*5)+(a-200)*10)
