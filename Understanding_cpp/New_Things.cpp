#include<iostream>
using namespace std;
int main(){
    //Size of
    cout<<"------Size of------"<<endl;
    float d = 3.14F;
    long double e = 3.14L;
    cout<<"The size of 3.14 is "<<sizeof(3.14)<<endl;
    cout<<"The size of 3.14 is "<<sizeof(3.14f)<<endl;
    cout<<"The size of 3.14 is "<<sizeof(3.14F)<<endl;
    cout<<"The size of 3.14 is "<<sizeof(3.14l)<<endl;
    cout<<"The size of 3.14 is "<<sizeof(3.14L)<<endl;
    cout<<"The valuse of d is "<<d<<endl;
    cout<<"The valuse of e is "<<e<<endl;

    //Reference variable
    cout<<"------Reference Variable------"<<endl;
    float x = 52.3258;
    float & y=x;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    //Here y is the reference variable that points at x

    //Typecasting (changing the data type of a variable)
    cout<<"------Typecasting------"<<endl;
    float a =34.27;
    cout<<"Value of a before typecasting: "<<a<<endl;
    cout<<"Value of a after typecasting: "<<(int)a<<endl;
}