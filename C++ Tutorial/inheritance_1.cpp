#include <iostream>
using namespace std;
class Teacher{
    public:
        Teacher(){
            cout<<"I am a teacher";
        }
        string collageName = "BegginersBook";
};
class MathTeacher: public Teacher{
    public:
        MathTeacher(){
            cout<<"I am a teacher"<<endl;
        }
        string mainSub = "Math";
        string name = "Negan";


};

int main(){
    MathTeacher obj;
    cout<<"Name: "<<obj.name<<endl;
    cout<<"Collage Name: "<<obj.collageName<<endl;
    cout<<"Subject: "<<obj.mainSub;
    return 0;
}
//Single Inheritance
// one class inherits exactly one aother class
class A{
    public:
        A(){
            cout<<"this is cons of A"<<endl;
        }

};
class B: public A{
    public:
        B(){
            cout<<"this is cons of B"<<endl;
        }
};

int main(){
    B obj;
    return 0;
}

//multilevel Inheritance
// One class ingerites chil of another class
class A {
public:
  A(){
     cout<<"Constructor of A class"<<endl;
  }
};
class B: public A {
public:
  B(){
     cout<<"Constructor of B class"<<endl;
  }
};
class C: public B {
public:
  C(){
     cout<<"Constructor of C class"<<endl;
  }
};
int main() {
  //Creating object of class C
  C obj;
  return 0;
}

//multiple Inheritance 
// one class inherites more than one class
// this means that a single child class can have many parents
class A {
public:
  A(){
     cout<<"Constructor of A class"<<endl;
  }
};
class B {
public:
  B(){
     cout<<"Constructor of B class"<<endl;
  }
};
class C: public A, public B {
public:
  C(){
     cout<<"Constructor of C class"<<endl;
  }
};
int main() {
   //Creating object of class C
   C obj;
   return 0;
}
// Hierarchial Inheritance
// one parent class has more than one child class
class A {
public:
  A(){
     cout<<"Constructor of A class"<<endl;
  }
};
class B: public A {
public:
  B(){ 
     cout<<"Constructor of B class"<<endl;
  }
};
class C: public A{
public:
  C(){
     cout<<"Constructor of C class"<<endl;
  }
};
int main() {
   //Creating object of class C
   C obj;
   return 0;
}