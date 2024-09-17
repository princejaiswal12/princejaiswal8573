# 0 1 1 2 3 5 8 13
def fibonicii(n):
    if n==1 or n==2:
        return n-1
    return fibonicii(n-1)+fibonicii(n-2)
n=int(input("Enter a number : "))
for i in range(1,n+1):
    print(fibonicii(i))