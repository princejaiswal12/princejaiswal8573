class rectangle :
    def __init__(self,height,width):
        print(f"A rectangle created of height : {height} ,width : {width}")
        self.height=height
        self.width=width 
    def set_dimentions(self,height,width):
        self.height=height
        self.width=width
    def area(self):
        return self.height*self.width
    def perimeter(self):
        return 2*(self.height+self.width)
    
#creating object
rectangle1=rectangle(4,3)
#rectangle1.set_dimentions(4,3)
print(rectangle1.height,rectangle1.width)
print(rectangle1.area())
print(rectangle1.perimeter())