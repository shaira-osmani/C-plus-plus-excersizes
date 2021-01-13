/*
Function overloading and Operator overloading are examples of polymorphism. 
Polymorphism is a feature using which an 
object behaves differently in different situation.
In function overloading we can have more than one function with 
same name but different numbers, type or sequence of arguments.
*/

#include <iostream>
using namespace std;

class Sum{
    public:
        int add(int num1, int num2){
            return num1 + num2;
        }
        int add(int num1, int num2, int num3){
            return num1 + num2 + num3;
        }

};
int main(void){
    Sum obj;
    cout<<obj.add(10,11,12);
    cout<<obj.add(14,15);
    return 0;
}