#include <iostream>
using namespace std;
int main(){
    int arr[0,1,2,3,4,5,6,7,8,9]; // or
    int array[] = {1,2,3,4,5,6,7,8,9};

    for (int i=0; i<=9;i++){
        cout<<arr[i]<<endl;
    }

}

//multidimentional array

int main(){
    int array[6][6] = {{1,2,3,4,5,6}, {1,2,3,4,5,6}};
    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            cout<<array[i][j]<<endl;
            
        }
    }
    return 0;
}

//passing array into function

void sum(int arr[], int array[]){
    int temp[2];
    for(int i=0;i<=5;i++){
        temp[i] = arr[i]+array[i];
        cout<<temp[i]<<endl;
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    sum(a,b);
    return 0;
}

//passing into multi diementional arrays into functions

void square(int arr[2][3]){
   int temp;
   for(int i=0; i<2; i++){
      for(int j=0; j<3; j++){
        temp = arr[i][j];
        cout<<pow(temp, 2)<<endl;
      }
   }
}
int main(){
   int arr[2][3] = { 
       {1, 2, 3},
       {4, 5, 6}
   };
   square(arr);
   return 0;
}

//arrays of characters

int main(){
   char book[50] = "A Song of Ice and Fire";
   cout<<book;
   return 0;
}

int main(){
   char book[50];
   cout<<"Enter your favorite book name:";
   //reading user input
   cin>>book;
   cout<<"You entered: "<<book;
   return 0;
}

int main(){
   char book[50];
   cout<<"Enter your favorite book name:";
 
   //reading user input
   cin.get(book, 50);
   cout<<"You entered: "<<book;
   return 0;
}

