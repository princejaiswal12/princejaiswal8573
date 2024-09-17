phones={
    "riya" : 982628,
    "john" : 857575,
    "monu" : 995610
}
print(phones)
print(type(phones))
print(len(phones))

print(phones["john"])
print(phones.get("john"))
print(phones.keys())

# update valve to dictionary
phones["john"]= 123457
print(phones)
# add elements in dict
phones["rahul"]=123334
print(phones)

more_phones={
    "kia" : 234567
}
phones.update(more_phones)
print(phones)

#remove  elements
phones.pop("john")
print(phones)

#remove last added ele
phones.popitem()
print(phones)

#empty the dictionary
# phones.clear()
# print(phones)

for i in phones :
    print(i)

#printing elements of dictonary
for x,y in phones.items():
    print(x,y)
    