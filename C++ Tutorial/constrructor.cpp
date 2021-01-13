//Constructor is a special member function of a class that initializes the object of the class. 
//Constructor name is same as class name and it doesn’t have a return type

#include <iostream>
using namespace std;
class Demo{
    public:
        int num;
        char ch;

    Demo(){
        num = 10;
        ch = 'hello';
    }

};

int main(){
    Demo obj;
    cout<<obj.num<<endl;
    cout<<obj.ch;
    return 0;
}

//parameterized COnstructors -> allows us to pass arguments while object creation

class Add{
public:
   //Parameterized constructor
   Add(int num1, int num2) {
     cout<<(num1+num2)<<endl;
   }
};
int main(void){
   /* One way of creating object. Also
    * known as implicit call to the
    * constructor
    */
   Add obj1(10, 20);
   /* Another way of creating object. This
    * is known as explicit calling the
    * constructor.
    */
   Add obj2 = Add(50, 60);
   return 0;
}