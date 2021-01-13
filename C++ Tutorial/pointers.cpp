// data_type *pointer_name;

/* This pointer p can hold the address of an integer 
 * variable, here p is a pointer and var is just a
 * simple integer variable
 */

// int *p, var

/* This is how you assign the address of another variable
 * to the pointer
 */
// p = &var;

// This will print the address of variable var
//cout<<&var;    

/* This will also print the address of variable
 * var because the pointer p holds the address of var
 */
//cout<<p;    

/* This will print the value of var, This is 
 * important, this is how we access the value of
 * variable through pointer
*/
//cout<<*p; 

#include <iostream>
using namespace std;
int main(){
    int *p, var=10;
    p = &var;
    cout<<"Address of var"<<&var<<endl;
    cout<<"address of war"<<p<<endl;
    cout<<"address of p"<<&p<<endl;
    cout<<"value of war"<<*p<<endl;
    return 0;

}

// pointers with arrays - array already shows the adress 
//so writing it as &arr is wrong
//just write p = arr;

int main(){
    int *p;
    int arr[] = {1,2,3,4,5};
    p = arr;
    for(int i; i<5;i++){
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
//increment pointers
// p++ pointer moves to the next int position 
// ++p same as above
//++*p, ++(*p) and ++*(p) -> increment the value of variable that the pointer is set.

//THIS pointer

class demo{
private:
    int num;
    char ch;
public:
    void setMyvalues(int num, char ch){
        this->num= num;
        this->ch= ch;

    }
    void displayMyValues(){
        cout<<num<<endl;
        cout<<ch;
    }

};

int main(){
    demo obj;
    obj.setMyvalues(100,'A');
    obj.displayMyValues();
    return 0;
}
//example 2

class demo_2{
    private:
        int num;
        char ch;
    public:
        demo_2 &setNum(int num){
            this -> num = num;
            return *this;

        }
        demo_2 &setCh(char ch){
            this->num++;
            this-> ch = ch;
            return *this;
        }

        void displayMyValues(){
            cout<<num<<endl;
            cout<<ch;
        }
};

int main(){
    demo_2 obj;
    obj.setNum(100);
    obj.setCh('A');
    obj.displayMyValues();
    return 0;
}