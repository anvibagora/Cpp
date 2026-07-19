#include <iostream>
using namespace std;

struct employee{
    int id;
    string name;
    float salary;
};

// You can also do it this way (different example)

typedef struct student{
    int prn;
    string fullname;
}stdt;

union money{
    int rice;  //Money in terms of kilo of rice
    char car[50]; //Money in terms of model of car
    float rupees; //Money in rupees
    /*At a time I only need to use one variable to compare my money to. 
    Therefore we use union in conditions like this.*/
};

int main(){
    struct employee em1;
    em1.id = 1262251629;
    em1.name = "Anvi Bagora";
    em1.salary = 5000000;
    cout<<"----Structure 01----"<<endl;
    cout<<"Employee ID: "<<em1.id<<endl;
    cout<<"Employee Name: "<<em1.name<<endl;
    cout<<"Employee Salary: "<<em1.salary<<endl;

    stdt anvi;
    anvi.prn=1262251629;
    cout<<"----Structure 02----"<<endl;
    anvi.fullname = "Anvi Bagora";
    cout<<"Student PRN: "<<anvi.prn<<endl;
    cout<<"Student Full Name: "<<anvi.fullname<<endl;

    union money m1;
    m1.rice = 5;
    cout<<"----Union----"<<endl;
    cout<<"The vaule of money in terms of kilogram of rice is "<<m1.rice<<endl;

    return 0;
}