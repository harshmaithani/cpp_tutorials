
import draw 
from draw import draw_game
from darw import * 

import numpy as np

# %s    string
# %d    integers
# %f    float


a,b        =    10,2

number1     =   a   +   b
number2     =   a   -   b
number3     =   a   *   b
number4     =   a   /   b
number5     =   a   %   b               #   remainder
number6     =   a   **  b               #   power 

float1     =    7.0

string1     =   'albert'
string2     =   "einstein"
string3     =   string1 + " " + string2
string4     =   string1 * 10

number7     =   string1.index("a")      # Find the index 

print(string3)                          # print the whole string
print(string3(2:5))                     # print a slice of the string 
print("This line will be printed.")
print("%s is %d years old" % (string1,number3))

#   Lists

list1   =   []
list2   =   [1,2,3]
list3   =   [4,5,6]
list4   =   list2   +   list3
list5   =   ["Albert","Einstein","Marie","Curie"]    

list2.append(1)
list2.append(2)
print(list2[0])      # prints 1
print(list2)         # prints whole list
print(list2 * 2)     # prints whole list 2 times

x   =   object()
number7 = list2.count(x)    
y   =   len(list2)

# 

data = ("Albert","Einstein",45)

#   If 
if string1 == "hello":                  #   If 
    print("String: %s" % string1)
elif string1 == "hi":                   #   If 
    print("String: %s" % string1)
else:
    print("String: %s" % string1)

if string1 == "Albert" and number1 == 10:
    print("Hi")

if string1 == "Albert" or number1 == 10:
    print("Hi")

if string1 in list5:
    print("Hi")

#   For 

for x in list2:
    print(x)

for x in range(10):
    print(x)

for x in range(10,20):
    print(x)

for x in range(10,20,3):
    print(x) 

#   While 

while number1 < 100:
    print(number1)

while number1 < 100:
    print(number1)
else:
    print("Hi")

#   Functions 

def add(m,n):
    print(m+n)
    return m + n

def foo(first, second, third, *therest):                # *therest is for a variable number of other arguments
    print("And all the rest... %s" % list(therest))

#   Classes

class MyClass():

    number      =   100
    string      =   "Albert"

    def function(self):
        print("This is a message inside a class")

object1 = MyClass()
print(object1.string)
object1.function()

#   Dictionaries

phonebook = {}
phonebook["John"] = 938477566           # Adding a value to the dictionary
phonebook["Jack"] = 938377264
phonebook["Jill"] = 947662781
print(phonebook)

phonebook2 = {
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}
print(phonebook2)

for name, number in phonebook.items():                      # Iterating over a dictionary
    print("Phone number of %s is %d" % (name,number))

del phonebook["Jill"]                                       # Deleting a value
pop phonebook["Jack"]                                       # Deleting a value

if "John" in phonebook:
    print("John is in the phonebook")

#   Numpy arrays

height      =   [1.2,1.3,1.4]
weight      =   [50,60,70]

np_height   =   np.array(height)
np_weight   =   np.array(weight)
bmi         =   np_weight / np_height ** 2

#   Main 

def main(): 
    result  = add(2,3)

if __name__ == '__main__':                          # this means that if this script is executed, then 
    main()                                          # main() will be executed
    