#include <iostream>
using namespace std;

// structure'lar bizim birden fazla ozellik tutmamizi saglar
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
    cout << "id : " << emp1.id << endl;
    cout << "department: "<< emp1.department << endl;
    emp1.name = "Ahmet Cokyaman";
    cout << "new name : " << emp1.name << endl;

    return 0;
}