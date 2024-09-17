num1 = int(input("Enter First Number : "))
num2 = int(input("Enter Second Number : "))

operator = input("Enter The Operator : ")
match operator :
    case "+" :
        print("sum is : ",num1+num2)
    case "-" :
        print("subtraction is : ",num1-num2)
    case "*" :
        print("multiplication is : ",num1*num2)
    case "/" :
        print("division is : ",num1/num2)
    case _ :
        print("enter valid operator ")