def factorialfun(n):
    ans = 1
    if n==0:
        return 1
    else:
        for i in range(1,n+1):
            ans*=i
        return ans

n=int(input("Enter a number : "))
print(factorialfun(n))