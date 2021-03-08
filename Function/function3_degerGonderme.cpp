#include <iostream>
using namespace std;

void parametreChange(int a, int b)
{
    if((a && b) < 0)
        return;

    int temp;
    temp = b;
    b = a;
    a = temp;

    cout << "a :" << &a << endl;
    cout << "b :" << &b << endl;
}

int main ()
{
    int sayi1 = 5 , sayi2 = 10;

    cout << "sayi1...."  << sayi1 << "--"<< &sayi1 << endl;
    cout << "sayi2...."  << sayi2 << "--"<< &sayi2 << endl;

    parametreChange(sayi1, sayi2); // deger ile gonderme, // fonksiyon bittikten sonra tum degiskenler hafizadan kaldiriliyor. 

    cout << "sayi1...."  << &sayi2 << endl;
    cout << "sayi2...."  << &sayi2 << endl;
    
    return 0;
}