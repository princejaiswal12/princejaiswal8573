n=int(input("enter a number :"))
if n % 15 == 0:
    print("Number is divisible by 15")
else :
    if n%3==0 or n%5==0 :
        print("Number is not divisible by 15 but divisible by 3 or 5")
    else :
        print("Number is not divisible by 15 ,3,5 ")
    