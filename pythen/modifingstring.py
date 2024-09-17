#for converting character to upper case
str1 = "new york"
str2=str1.upper()
print(str2)

#for converting character to lower case
str3 = str2.lower()
print(str3)

#for capitalize first letter of the string
str4 = str3.capitalize()
print(str4)

#for striping or removing any trailing whitestring
str5="    hello world     "
print(str5.strip())
print(str5)

#replacing string
str6 = "hello world,what a beatiful world is this"
print(str6.replace("world","earth",1))
print(str6.replace("world","earth"))

#splitting string
str7="rie oie pie rea roor"
list = str7.split()
print(list)

str8 ="rie,oer,she,rew,oot the roor,hi,none"
list=str8.split(",",5)
print(list)

#concatination
print(str7+str8)

#string formating
student_name = "rahul"
student_rollno=98
str9="the student name is {s},its rollno is {r}".format(s=student_name,r=student_rollno)
print(str9)