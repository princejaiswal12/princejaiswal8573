#pos or neg
x=int(input("enter the number"))
if (x >= 0) :
    print("number is positive")
else :
    print("num is not pos")

#even or odd
if x%2==0 :
    print("number is even")
else :
    print("number is odd")

#profit loss
cost_price=int(input("Enter Cost Price"))
selling_price=int(input("Enter Selling price "))
if selling_price > cost_price :
    profit=selling_price-cost_price
    print("profit of : ",profit)
elif cost_price > selling_price :
    loss=cost_price-selling_price
    print("loss of : ",loss)
else :
    print("no profit And loss")