#include <iostream>
using namespace std;

int main()
{
    // pointer'lar degisken adresi isareti yaparlar

    int a = 100;
    int *p;
    p = &a; // a'nin referansini ptr pointerina atamak

    cout << "a : " << a << endl;  //100
    cout << "&a : " << &a << endl;//0x61fe14
    cout << "p : " << p << endl; //0x61fe14
    cout << "&p : " << &p << endl;//0x61fe10
    cout << "*P : " << *p << endl; //100

    //burda normal de ptr bir pointer onu farkli bir pointera atadigimiz zaman ** kullanilir.
    int **q;
    q = &p;

    cout << "q : " << q << endl; //0x61fe10
    cout << "&q : " << &q << endl;// 0x61fe08
    cout << "**q : " << **q << endl; //100
    cout << "p : " << p << endl; //0x61fe14
    cout << "&p : " << &p << endl; //0x61fe10
    cout << "*p : " << *p << endl; //100

    return 0;
}