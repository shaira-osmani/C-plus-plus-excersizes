#include <iostream>
using namespace std;

int num1 = 10;
int num2 = 100;
int main(){
    if(num1 < num2){
        cout<<"ano baka";
    }
    else{
        cout<<"watashi baka";
    }
    return 0;
}

int cases(){
   int num=5;
   switch(num+2) {
      case 1: 
        cout<<"Case1: Value is: "<<num<<endl;
      case 2: 
        cout<<"Case2: Value is: "<<num<<endl;
      case 3: 
        cout<<"Case3: Value is: "<<num<<endl;
      default: 
        cout<<"Default: Value is: "<<num<<endl;
   }
   return 0;
}

int breakstatement(){
   int i=2;
   switch(i) {
      case 1: cout<<"Case1 "<<endl;
      case 2: cout<<"Case2 "<<endl;
      case 3: cout<<"Case3 "<<endl;
      case 4: cout<<"Case4 "<<endl;
      default: cout<<"Default "<<endl; 
   }
   return 0;
}

//for loops

int loops(){
    for(int i=0; i<=100; i++){
        cout<<"i is equale to: "<<i<<endl;
    }
    return 0;
}
//arrays
int array(){
    int arr[1,2,3,4,5];
    for(int i=0; i<6; i++){
        cout<<"the number is"<<arr[i]<<endl;
    }
    return 0;

}

//while loop
int while_loops(){
    int i = 0;
    while(i<10){
        cout<<"this is from while loop:"<<i<<endl;
        i++;
    }
    return 0;
}

//do while loops
int function(){

    int arr[1,2,3,4,5,6,7,8,9];
    int i = 0;
    do{
        cout<<"this is from array"<<arr[i]<<endl;
        i++;
    }
    while(i<10);
    return 0;
}

// continue statement
int function2(){
    for(int i=0; i=10; i++){
        if (i==3){
            continue;
        }
        cout<<"i"<<i<<endl;

    }
    return 0;
}

//break statement

int break_statement(){
    int num = 10;
    while(num <= 100){
        cout<<"print the number"<<num<<endl;
        if(num==12){
            break;
        }
        num++;
    }
    cout<<"hey i am out of the loop";
    return 0;
}

//goto

int goto_function(){
   int num; cout<<"Enter a number: "; cin>>num;
   if (num % 2==0){
      goto print;
   }
   else {
      cout<<"Odd Number";
   }
//label name 
   print:
   cout<<"Even Number";
   return 0;
}