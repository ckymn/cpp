#include <iostream>
using namespace std;

void newNumber(int *ptr)
{
    *ptr = 20;
    cout << "val referans degeri : " << &ptr << endl; //0x61fdf0
    cout << "val degeri : " << *ptr << endl; // 20
    cout << "val ptr degeri : " << ptr << endl;
    cout << "new val in referans degeri : " << &ptr << endl; // 0x61fdf0
}
int main()
{
    // pointer'lara adres degeri atama islemi &(ampersan) ile yapilir = referans
    // pointer'lari gostermenin yolu ise *<pointer adi> ile yapilir = pointer
    // degiskenin degerini degistirmek icin referans(pointer) numarasini degistirmek lazim oda callbay referance ile yapilir!

    int a = 10;
    cout << "a degeri : " << a << endl; // 10
    cout << "a nin referans degeri : " << &a << endl; // 0x61fe1c
    newNumber(&a);
    cout << "new val degeri : " << a << endl; // 20
    cout << "new a nin referans degeri : " << &a << endl; // 0x61fe1c
    
    return 0;
} 