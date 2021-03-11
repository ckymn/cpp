#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
};

void showEmployee(Employee);
void showEmployeePointer(Employee*);
void showEmployeeReferance(Employee&);

int main()
{
    Employee emp1 = {12, "muhammet"};
    cout << "emp1 : " << &emp1 << endl;          //0x61fdd0
    cout << "emp1 name : " << emp1.name << endl; //muhammet

    Employee *emp2 = &emp1;
    cout << "emp2 : " << emp2 << endl;             //0x61fdd0
    cout << "*emp2 name : " << emp2->name << endl; //Muhammet

    //! burda c++ gelistiricileri (-> yerine .) ile erisimi getirdiler.
    Employee &emp3 = emp1;
    cout << "&emp3 name : " << emp3.name << endl; //muhammet

    showEmployee(emp1); //todo: call by value
    showEmployeePointer(&emp1); //todo: call by referance(pointer)
    showEmployeeReferance(emp1); //todo: call by referance(referance)

    return 0;
}

void showEmployee(Employee emp1)
{
    cout << "id : " << emp1.id << endl;
    cout << "name : " << emp1.name << endl;
}

void showEmployeePointer(Employee* emp1)
{
    cout << "id : " << emp1->id << endl;
    cout << "name : " << emp1->name << endl;
}

void showEmployeeReferance(Employee& emp1)
{
    cout << "id : " << emp1.id << endl;
    cout << "name : " << emp1.name << endl;
}