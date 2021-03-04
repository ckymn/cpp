#include <iostream>
using namespace std;

int main()
{
    // referanslar degiskenin adresini verirler. 
    // referanslar'da ayni degere iki farkli isim ile erisebiliyoruz

    int a  = 10;
    int &ref = a;
    ref = 20;

    cout << a << endl; //20
    cout << ref << endl; //20

    ref++;

    cout << a << endl;//21
    cout << ref << endl;//21

    cout << &ref << endl;//0x61fe14
    cout << &a << endl;//0x61fe14 
    return 0;
}