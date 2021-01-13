#include <iostream>
using namespace std;

int main(){
    //creating string object
    string str;
    cout<<"Enter any string";
    getline(cin,str);
    cout<<"this is what you typed"<<str<<endl;

    //add sth at the end of the string
    str.push_back('bye');
    cout<<"the updated string"<<str<<endl;
    str.pop_back('bye');
    cout<<"you removed: "<<str<<endl;
    return 0;
}


