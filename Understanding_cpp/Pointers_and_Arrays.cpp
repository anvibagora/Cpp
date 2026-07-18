#include<iostream>
using namespace std;

int main(){
    int age[4]={8,19,43,48};
    int* p = age;
    cout<<"The value of age[0] is "<<*p<<endl;
    cout<<"The value of age[0] is "<<*(p+1)<<endl;
    cout<<"The value of age[0] is "<<*(p+2)<<endl;
    cout<<"The value of age[0] is "<<*(p+3)<<endl;
    cout<<"Same thing different syntax"<<endl;
    cout<<"The value of age[0] is "<<*p<<endl;
    cout<<"The value of age[0] is "<<*(++p)<<endl;
    cout<<"The value of age[0] is "<<*(++p)<<endl;
    cout<<"The value of age[0] is "<<*(++p)<<endl;

}