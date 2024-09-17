l1=[1,2,5,7,5]
l2=[10,20,5,5,30]
l3=[12,13,14,5,5,11]

s1=set(l1)
s2=set(l2)
s3=set(l3)

s1s2=s1.intersection(s2)
final_set=s1s2.intersection(s3)

final_list=list(final_set)
print(final_list)