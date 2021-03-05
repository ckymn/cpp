#include <iostream>
using namespace std;

struct Address
{
    string city;
    int No;
};

struct Employee
{
    int id;
    string name;
    string department;
    Address *address;
};

int main()
{
    Employee emp1 = {12, "Muhammet COKYAMAN", "Yazilim"};
    Address adr1 = {"Ankara",5}; 

    emp1.address = &adr1;
    Employee *ptr = &emp1;

    cout << ptr->address->city << endl;
    cout << ptr->address->No << endl;
    cout << "ptr : " << ptr <<endl;
    cout << "&adr1 : " << &adr1 << endl;
    cout << "&emp1 : " << &emp1 << endl;
    return 0;
}