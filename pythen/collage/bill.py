a=int(input("enter amount in 30 days"))
b=int(input("enter days  delay in payments "))
for i in range(1,b,5):
    a=a+a*0.02
print(a)