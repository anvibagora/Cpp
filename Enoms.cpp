#include<iostream>
using namespace std;

/*An enum (short for enumeration) is a user-defined data type in C++
 used to assign readable names to a set of integral constants. Instead 
 of using confusing numbers like 0, 1, or 2 throughout your code, you 
 can use meaningful words like Red, Green, or Blue.*/

int main(){

    enum TrafficLight {
    Red,    // 0
    Yellow, // 1
    Green   // 2
    };
    TrafficLight signal = Red;

    enum class Color {
    Red,        // Totally fine! No naming conflict with TrafficLight::Red in scoped enums
    Green,
    Blue
    };
    Color shirt = Color::Red; // Must use the scope resolution operator (::)

    cout<<"Traffic light red "<<signal<<endl;
    //below line gives error
    //cout<<"Colour red "<<shirt<<endl;
    // Scoped enums require an explicit cast to print as an integer
    cout << "Colour red: " <<static_cast<int>(shirt)<< endl;

    return 0;
}