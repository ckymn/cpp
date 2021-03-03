#include <iostream>
using namespace std;

int main()
{
    // pointer'lara adres degeri atama islemi &(ampersan) ile yapilir
    // pointer'lari gostermenin yolu ise *<pointer adi> ile yapilir

    int a = 10;
    int *ptr = &a;

    cout << &a; // 0x61fe14
    cout << ptr; // 0x61fe14
    cout << *ptr; // 10

    *ptr = 6;

    cout << "degiskenin yeni degeri : " << *ptr; // 6

    return 0;
}