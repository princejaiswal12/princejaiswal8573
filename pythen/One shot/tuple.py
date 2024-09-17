colour = ("red","green","yellow")

# tuple with 1 item
# fruits = ("apple",)
fruits = tuple(("apple"))

# check type of tuple
print(type(fruits))

print(len(colour))

print(colour[0])
print(colour[-1])
print(colour[1:3])
print(colour[-2:])

#check item in tuple
if "green" in colour :
    print("Green is present in colour")

for i in colour:
    print(i)

# concatenate 2 tuple
more_colours=("green ","black")
colour=colour+more_colours
print(colour)

#unpacking a tuple 
colour1,colour2,colour3,colour4,colour5=colour
print(colour1,colour2,colour3)