name1='prince jaiswal'
name2="krishna jaiswal"
name3='''khushi 
jaiswal'''
print(name1,name2,name3)

print(type(name1))
print(type(name2))
print(type(name3))

print(name1[0])
print(name1[-1])

#traversing a string
#using loop
for i in name1:
    print(i,end="")
print()

#using list comprehension
list=[char for char in name1]
for i in list:
    print(i,end="")
print()

print(len(name1))

#find a character/string in a string
print(name1.find('i'))

#slicing a string
print(name1[1:4]) #give a part of string