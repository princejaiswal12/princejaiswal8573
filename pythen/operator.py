#arthamitic operator
print("Addition :",4+3)
print("subtraction :",4-3)
print("multiplication :",4*3)
print("division :",4/3)
print("floor division :",4//3)
print("exponential :",4**3)

#assiment operators
n1=5
n2=n1
print(n1,n2)
n2+=n1
print(n1,n2)
 
#comparision operators
a=4
b=2
print(a>b)

# logical operator
exp1 = 2>1 #True
exp2 = 5<4 #false
print("exp1 and exp2 :",exp1 and exp2)
print("exp1 or exp2 :",exp1 or exp2)
print("not exp :",not(exp1))

#identity operator
x=5
y=5
print("If x is y : ",x is y)
print("If x is not y : ",x is not y)
#membership operator
fruits=["apple","banana","cherry"]
print("banana is present in fruits : ","banana" in fruits)
print("mango is not present in fruits :","mango" not in fruits)

#bitwise operator
c = 5
d = 3
print("a and b : ", a & b)
print("a or b : ", a | b)
print("a xor b : ", a ^ b)
