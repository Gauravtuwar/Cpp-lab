#include <iostream> 
using namespace std; 
// Base class 
class Animal { 
public: 
// Virtual function for dynamic binding 
virtual void speak() const { 
cout << "Some generic animal sound" << endl; 
} 
// Virtual destructor to ensure proper cleanup of derived objects 
virtual ~Animal() {} 
}; 
// Derived class Dog 
class Dog : public Animal { 
public: 
// Override the base class function 
void speak() const override { 
cout << "Woof!" << endl; 
} 
}; 
// Derived class Cat 
class Cat : public Animal { 
public: 
// Override the base class function 
void speak() const override { 
cout << "Meow!" << endl; 
} 
}; 
// Function that takes a pointer to Animal and calls its speak method 
void makeAnimalSpeak(const Animal* animal) { 
animal->speak(); 
} 

int main() { 

Dog myDog; 
Cat myCat; 

Animal* animal1 = &myDog; 
Animal* animal2 = &myCat; 

makeAnimalSpeak(animal1); 
makeAnimalSpeak(animal2); 
return 0; 
} 