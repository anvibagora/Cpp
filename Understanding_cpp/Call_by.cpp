#include <iostream>
using namespace std;

void nowork(int num) {
    num = 100; // Changes only the local copy
}

void works(int &num) { // Notice the '&' sign
    num = 100; // Directly modifies the original variable
}

int main() {
    int x = 5;
    /*-----Call by Value-----
    When you use call by value, C++ creates a duplicate copy 
    of the original variable's data and passes that copy into the function.
    Modifying the parameter inside the function has no effect on the
    original variable outside the function.*/
    nowork(x);
    cout << "x is still: " << x << std::endl; // Output: 5
   
    /*-----Call by Reference-----
    Instead of copying the value, call by reference passes the actual 
    memory address of the original variable. In C++, this is done using
    the ampersand symbol (&). Modifying the parameter inside the function 
    directly alters the original variable.*/
    works(x);
    std::cout << "x is now: " << x << std::endl; // Output: 100

    return 0;
}