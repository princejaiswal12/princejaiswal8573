class animal:
    def speaks(self):
        pass

class dog(animal):
    def speak(self):
        print("barks")

class cat(animal):
    def speak(self):
        print("meow")

class cow(animal):
    def speak(self):
        print("Mooo")

dog=dog()
cat=cat()
cow=cow()

dog.speak()
cat.speak()
cow.speak()