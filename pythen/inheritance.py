
class parents :
    def __init__(self):
        self.super_attributes=True
        print("this is parents class")

class child(parents) :
    def __init__(self) :
        super().__init__()
        print(self.super_attributes)
        print("this is a child class")

child1 = child()

        