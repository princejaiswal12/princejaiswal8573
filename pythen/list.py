fruits = ["apple","banana","charry","mango"]
print(fruits,type(fruits))
print(len(fruits))

#checking the item is present in list 
if "banana" in fruits :
    print("banana in list ")


print(fruits[1]) #banana 
print(fruits[-3]) #banana
print(fruits[1:3]) #1,2
print(fruits[-3:-1]) 

fruits.append("kivi")
print(fruits)
 
fruits.insert(2,"papaya")
print(fruits)

more_fruits=["apple","banana"]
fruits.extend(more_fruits)
print(fruits)

fruits.remove("banana")
print(fruits)

fruits.pop(1)
print(fruits) 
 
fruits[2]="ORANGE"
print(fruits)

fruits[1:3] =["papaya"]
print(fruits)

#sorting list
fruits.sort() #by default asending order
print(fruits)

fruits.sort(reverse=True)
print(fruits)

#reverse list
fruits.reverse()
print(fruits)

#list comprehension
new_fruits = [fruit for fruit in fruits if "a" in fruit]
print(new_fruits)

#copy list
new_list = fruits.copy()
print(new_list)

new_list=fruits+new_list
print(new_list)

# nested list 
fruits.insert(2,["kiwi","papaya"])
print(fruits)

print(fruits[2][0])