#include <iostream>
using namespace std;

struct Nested_Struct
{
    int age;
    string cityName;
};

struct Employee
{
    int id;
    string name;
    string department;
    Nested_Struct nested_struct;
};

int main()
{
    Employee emp1 = {12, "muhammet cokyaman", "Yazilim", {21, "Ankara"}};
    cout << "id : " << emp1.id << endl;
    cout << "age : " << emp1.nested_struct.age << endl;
    return 0;
}