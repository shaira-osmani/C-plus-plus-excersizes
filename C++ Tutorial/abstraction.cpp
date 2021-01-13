// Abstractio is a process of hiding irrelevant details from user.
// Encapsulation is a process of combinig data and functions into a single unit like capsule.
// this is to avoid the access of private data memebers from outside the class
//Inheritance is a feature using which an object of child class acquires the properties of parent class.

#include <iostream>
using namespace std;
class ParentClass{
    public:
    int var1 = 100;
};
class ChildClass: public ParentClass{ //inheritance
    public:
    int var2 = 500;

};

int main(void){
    ChildClass obj;
}

