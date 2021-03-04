#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

int main()
{
    Employee emp1 = {12,"muhammet cokyaman","Yazilim"};
    cout << "name : " << emp1.name << endl;

    Employee *ptr = &emp1;
    cout << "name : " << ptr->name << endl;
    
    return 0;
}