#include <iostream>
using namespace std;

int carpma(int s1, int s2)
{
    return s1 * s2;
}

int toplama(int s1, int s2)
{
    return s1 + s2;
}

int main()
{

    int (*fonksiyon)(int, int);

    fonksiyon = carpma;
    cout << fonksiyon(10, 20);

    cout << endl;

    fonksiyon = &toplama;
    cout << (*fonksiyon)(10, 20);

    return 0;
}