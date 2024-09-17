def factorialfun(n):
    ans = 1
    if n==0:#base case
        return 1
    return n*factorialfun(n-1)#recursive case
n=int(input("Enter a number : "))
print(factorialfun(n)) 