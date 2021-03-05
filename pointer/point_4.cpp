#include <iostream> 
using namespace std;

int main()
{
    int sayi = 123;
    cout << "Degisken degeri : " << sayi << endl;//123
    cout << "Degisken adresi : " << &sayi << endl;//0x61fe1c

    int *ptr = &sayi;
    cout << "Pointer'in gosterdigi adres : " << ptr << endl;//0x61fe1c
    cout << "Pointer'in gostedigi adres deger : " << *ptr << endl;//123
    cout << "Pointer adresi : " << &ptr << endl;//0x61fe10

    return 0;
}