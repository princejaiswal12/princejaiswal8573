names = {"sia","mia","tia"}
print(names)
print(type(names))
print(len(names))

#accesing items of sets  
for i in names:
    print(i)

#check item in set
if "sia" in names:
    print("sia in names")

#add element  in set 
names.add("ram")
print(names)

#add another sequence in set 
new_names=("hero","sita")
names.update(new_names)
print(names)

#Remove elements from set 
names.remove("sita")
      #or
names.discard("siya")#if name not present in set it give no error
print(names)

s1={'a','b','c'}
s2 = {'d','e','a'}
print(s1,s2)
s3=s1.union(s2)
print(s3)

s1.update(s2)
print(s1)

# keep only duplicates while joining
s1.intersection_update(s2)
print(s1)

#keep all value execpt duplicates
s1.symmetric_difference_update(s2)
print(s1)





