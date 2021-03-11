#include <iostream>
using namespace std;

struct Adress
{
    string cityName;
    int no;
};
struct Employee
{
    int id;
    string name;
    Adress adres; //! nested struct
};

int main()
{
    Employee emp1 = {12, "muhammet" , {"Ankara" , 14}};

    cout << emp1.id << endl;//12
    cout << emp1.name << endl;//muhammet
    cout << emp1.adres.cityName << endl;// Ankara
    cout << emp1.adres.no << endl; //14


    return 0;
}

