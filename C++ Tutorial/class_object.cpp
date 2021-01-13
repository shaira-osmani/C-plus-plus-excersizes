//A class is like a blueprint of data member and functions and object is an instance of class.
#include <iostream>
using namespace std;

class Car{
    char name[20];
    int speed;
    int weight;
    public:
        void brake(){

        }
        void slowDown(){

        }


};

int main(){
    Car ford;
    ford.brake();
    ford.slowDown();
}