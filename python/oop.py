'''
class car:
    def __init__(self,make,model,year):
        self.make=make
        self.model=model
        self.year=year
    def display(self):
        print(f"{self.make} {self.model} {self.year}")
car1=car("toyota","i10",2024)
car1.display()

class dog:
    def __init__(self,breed):
        self.breed=breed
    def bark(self):
        print(f"{self.breed} Woof!")
my_dog=dog("Golden Retriever")
my_dog.bark()

class student:
    def __init__(self,name):
        self.name=name
    def average(self,lst):
        count=0
        for marks in lst:
            count=count+marks
        print(count)
st=student("Golden Retriever")
st.average([10,50,30,20])


class animal:
    def __init__(self,name):
        self.name=name
    def display(self):
        print(self.name)
        print("animal display")
class dog(animal):
    def __init__(self,name,breed):
       super().__init__(name)
       self.breed=breed
    def display(self):
        print(self.name,self.breed)
        print("dog display")
dog1=dog("buddy","GoldenRetriever")
dog1.display()


class bird:
    def sound(self):
        print("chirp!")
class fish:
    def sound(self):
        print("blub!")
def animal_sound(animal):
    animal.sound()
bird=bird()
fish=fish()
animal_sound(bird)
animal_sound(fish) 

'''
import math
class shape:
    def area(self):
        return 1
class circle(shape):
    def __init__(self,radius):
        self.r=radius
    def area(self):
        return math.pi*self.r*self.r
class square(shape):
    def __init__(self,side):
        self.r=side
    def area(self):
        return self.r*self.r
circle=circle(5)
square=square(4)
print(circle.area())
print(square.area())
ob=shape()
print(ob.area())