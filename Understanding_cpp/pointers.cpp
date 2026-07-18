#include<iostream>
using namespace std;

int main(){
    //What is a pointer ----> A data type that holds the address of other data type.
    int a = 3;
    int* b = &a;
    /*can also be written as: 
    int* b; 
    b = &a;*/
    // * ----> deference operator
    // & ----> adress operator
    cout<<"The vaule at a is: "<<a<<endl;
    cout<<"The Address of a is: "<<&a<<endl;
    cout<<"The address of a stored in b is: "<<b<<endl;
    cout<<"The value at address b is: "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b stored in c is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;

    return 0;
}