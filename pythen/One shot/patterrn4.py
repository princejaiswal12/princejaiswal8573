n = int(input("enter the number :"))
for i in range(1,n+1):
    # print spaces
    print("." * (n-i),end="")
    for j in range(1,2*i):
        print(j,end="")
    print()
 

