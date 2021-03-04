#include <iostream>
using namespace std;

int main()
{
    // pointer'lar degisken adresi isareti yaparlar

    int a = 10;
    int *ptr = &a; // a'nin referansini ptr pointerina atamak 

    cout << &a; // 0x61fe14
    cout << ptr; // 0x61fe14
    cout << *ptr; // 10

    *ptr = 6;

    cout << "degiskenin yeni degeri : " << *ptr; // 6

    return 0;
}