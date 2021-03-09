#include <iostream>
using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
        a[i] = i * i;

    cout << "a =" << a << endl;

    int *b = new int[8];
    for (int i = 0; i < 8; i++)
        b[i] = a[i];

    cout << "b =" << b << endl;

    delete[] a; //a pointerdaki eski degerleri siliyoruz

    a = b; // daha sonra heap'te yeni olusturulan alani a'ya atiyoruz.

    for(int i = 5; i < 8; i++)
        a[i] = i;

    /*result : 0,1,2,3,4,5,6,7*/

    return 0;
}