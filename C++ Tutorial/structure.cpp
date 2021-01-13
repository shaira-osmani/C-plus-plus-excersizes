//Structure is a compound data type that contains different variables of different types
#include <iostream>
using namespace std;
struct Student
{
    char stuName[30];
    int stuRollNo;
    int stuAge;
};

int main(){
    Student s;
    cout<<"Enter the student's name: ";
    cin.getline(s.stuName,30); //strings only
    cout<<"Enter the student roll No: ";
    cin>>s.stuRollNo;
    cout<<"Enter the students age: ";
    cin>>s.stuAge;

    cout<<"---------------------"<<endl;
    cout<<"you have entered:"<<endl;
    cout<<s.stuName<<endl;
    cout<<s.stuRollNo<<endl;
    cout<<s.stuAge;
    return 0;
}
