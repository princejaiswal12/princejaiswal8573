input_string = input("enter string : ")
n= int(input("enter number "))
# creating dictionary mirror oper
alphabets = "abcdefghijklmnopqrstuvwxyz"
reverse = alphabets[::-1] 
dict1 =dict(zip(alphabets,reverse))

#finding part of string on which we will do mirror operation
prifix=input_string[0:n-1]
suffix=input_string[n-1:]

# finding the mirror string 
mirror = ""
for i in range(0,len(suffix)):
    mirror= mirror + dict1[suffix[i]]
print(mirror)

# creatintg the final string
res =prifix + mirror
print("the result is :",res)

