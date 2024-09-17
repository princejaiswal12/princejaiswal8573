class student:
    def set_name(self,name):
        self.name = name

    def get_name(self):
        return self.name

student1 = student()
student1.set_name("sahajada")
print(student1.get_name())
student1.eng_marks = 45 #instan attributes
print(student1.eng_marks)

student2 = student()
student2.set_name("rahul")
print(student2.get_name())
