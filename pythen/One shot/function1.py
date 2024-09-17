def sum1ToN(n):
    sum=0
    for i in range(1,n+1):
        sum=sum+i
    return sum
 

n=int(input("enter the number : "))
print("sum is ",sum1ToN(n))