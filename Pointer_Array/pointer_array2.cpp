#include <iostream>
using namespace std;

void sifirla(int* a, int boyut)
{

    cout << a  << " - "  << *a << endl;

    for(int i = 0; i < boyut; i++)
        *(a + i) = 0;
}

void sifirla2(int a[] , int boyut)
{
    for(int i = 0; i < boyut; i++)
    {
        a[i] = 0;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sifirla(a, 10);

    for(int i = 0; i < 10; i++)
        cout << *a << "---" ;// 0000000000

    sifirla2(a,10);
    
    for(int i = 0; i < 10; i++)
        cout << a[i]; //0000000000
    return 0;
}