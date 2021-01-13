#include <iostream>
using namespace std;
int num1 = 240;
    int num2 = 40;
int main(){
    
    cout<<"addation"<<(num1+num2)<<endl;
    cout<<"subtraction"<<(num1-num2)<<endl;
    cout<<"multiplication"<<(num1*num2)<<endl;
    cout<<"division"<<(num1/num2)<<endl;
    cout<<"module"<<(num1 % num2)<<endl;
}

//assignments

int function(){
    num2 = num1;
    cout<<"= output"<<num2<<endl;
    num2 += num1; // the result is num2 = num2 + num1
    cout<<"num2 = "<<num2<<endl;

}
//auto incerement

int incerement(){
    num2++;
    cout<<"the result"<<num2<<endl;
    num2--;
    cout<<"the result"<<num2<<endl;
}

//logical operators
int logical(){
    bool b1 = true;
    bool b2 = false;
    //and &&
    // or ||
    //not !
    cout<<"and operation"<<(b1&&b2)<<endl;
    cout<<"or operation "<<(b1||b2)<<endl;
    cout<<"not operation"<<!(b1&&b2)<<endl;

}