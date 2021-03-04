#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

//function pointer
void show(Employee *emp) 
{
    cout << "id : " << emp->id << endl;
    emp->name = "Abdullah";
}
// function
void showEmployee(Employee emp)
{
    cout << "id : " << emp.id << endl;
}

int main()
{
    Employee emp1 = {12,"muhammet cokyaman","Yazilim"};

    show(&emp1);//12
    showEmployee(emp1);//12

    // !eger burdaki objede herhangi bir veri degisikligi yapinca *ptr(pointer) kullanmamiz gerekiyor
    show(&emp1);
    cout << emp1.name << endl;//Abdullah

    return 0;
}