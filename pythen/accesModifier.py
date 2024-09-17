#public modifier
# class ABC:
#     def __init__(self) :
#         self.public_attribute=None #this is public attribute

#     def public_function(): #this is public function
#         pass
#private modifier
# class ABC:
#     def __init__(self) :
#         self.__private_attribute=None #this is private attribute

#     def __private_function(): #this is private function
#         pass

# obj1 =ABC()
# print(obj1.__private_attribute) #give error

#protected modifier
class ABC:
    def _init__(self) :
        self._protected_attribute=None #this is protected attribute

    def _protected_function(): #this is protected function
        pass