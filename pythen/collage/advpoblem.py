import math
n = int(input("Enter size of list"))

list1 =[]
for _ in range(n):
    num = int(input())
    list1.append(num)
print(list1)
list2 =[]
for _ in range(n):
    num = int(input())
    list2.append(num)
print(list2)
b=0
for i in range(n):
    b=b+((list1[i]-list2[i])*(list1[i]-list2[i]))
print(math.sqrt(b))
