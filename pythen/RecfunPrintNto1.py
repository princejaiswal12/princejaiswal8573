def NtoOnefun(n):
    if n==0:
        return
    #print(n)
    NtoOnefun(n-1)
    print(n)


n=int(input("Enter a number : "))
NtoOnefun(n)