n = int(input("Enter size of list"))

list =[]
for _ in range(n):
    num = int(input())
    list.append(num)
print(list)

ind1 = int(input("Enter 1st index"))
ind2 = int (input("Enter 2nd index"))

temp=list[ind1]
list[ind1]=list[ind2]
list[ind2]=temp

print(list)