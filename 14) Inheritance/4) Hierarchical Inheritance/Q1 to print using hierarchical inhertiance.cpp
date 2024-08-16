/* Q1 Create a class name Animal . Print the string i am a animal .Create a class name dog and cat . Print I am dog , i 
am cat in respective classes but before printing those lines, print line i am an animal from animal class by deriving it */
 
#include<iostream>
using namespace std;

// base class
class Animal {
   public:
    void info() {
        cout << "I am an animal." << endl;
    }
};

// derived class 1
class Dog : public Animal {
   public:
    void bark() {
        cout << "I am a Dog. Bow Bow !!! ." << endl;
    }
};

// derived class 2
class Cat : public Animal {
   public:
    void meow() {
        cout << "I am a Cat. Meow Meow !!! ." << endl;
    }
};

int main() {
    // Create object of Dog class    Note: object name and class name not be Equal ...
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();  // Parent Class function
    dog1.bark();

    // Create object of Cat class
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();  // Parent Class function
    cat1.meow();

    return 0;
} 
