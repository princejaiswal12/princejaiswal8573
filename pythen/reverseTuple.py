input_tuple = (1,2,3,4,5,6)
list=[]

for i in reversed(input_tuple):
    list.append(i)

output_tuple = tuple(list) #typecast into tuple
print(output_tuple)
