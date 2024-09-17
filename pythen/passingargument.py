#pass by value
def addOne(x):
    x=x+1
    print("inside fun :",x)

x=5
addOne(x)
print("outsidefunc : ",x)

#pass by reference
def Modifylist(Lst):
    Lst.append(4)
    print("Inside func",Lst)

Lst=[1,2,3]
Modifylist(Lst)
print("outside func",Lst)

def Modifylist(Lst):
    Lst=[4,5,6] #if we assign list new list is created
    print("Inside func",Lst)

Lst=[1,2,3]
Modifylist(Lst)
print("outside func",Lst)
