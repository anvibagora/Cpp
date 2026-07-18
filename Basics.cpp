#include <iostream>
#include <cstdlib>

void intro(){
    int age, i;
    std::string name;
    std::cout <<"\nEnter Name: ";
    std::cin >> name;
    std::cout << "Enter age: ";
    std::cin >> age;
    if(age>=18){
        for(i=0;i<=age;i++){
            std::cout <<i<< " ";
        }
    }else{
        std::cout << "MINOR!";
    }
    std::cout << "\nYour name is " <<name<< " and you are " <<age<< " years old.\n";
}

int main(){
    int choice;
    while(1){
        std::cout << "\nWelcome\nNew Entry (";
        std::cout << "1 for yes and 0 for no): ";
        std::cin >> choice;
        switch(choice){
            case 0: 
                std::cout << "Thank you!";
                exit(0);
            case 1:
                intro();
                break;
            default: 
                std::cout << "INVALID OPTION!";
        }
    }
}