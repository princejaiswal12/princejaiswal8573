def PrintHello():
    print("hello world")
PrintHello()

def sum(n1,n2=0):
    print("n1 : ",n1)
    print("n2 : ",n2)
    sum=n1+n2
    return sum
#positional argument (the valve we pass go sequencily in function)   
print("sum is ",sum(2,3))
#keyword argument(named argument) we pass keywords ex-n1,n2
print("sum is ",sum(n2=2,n1=9))
#default argument 
print("sum is ",sum(2))#n2 take default value

#arbitrary argument 
def addAllNumber(*args):#arg act as tuple 
    sum=0
    for i in args:
        sum=sum+i
    return sum
print("sum is :",addAllNumber(2,3,4,5,6,7))

def studentInfo(**kwargs):
    for x,y in kwargs.items():
        print(x,"is",y)
studentInfo(name="urvi",age=20,city="delhi")
studentInfo(name="riya",age=20,city="bangalore")


