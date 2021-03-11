#include <iostream>
using namespace std;

int f(int);
int g(int*);

int main()
{
    int *p;
    int a = 10;
    p = &a;
    cout << "a : " << a << endl; //10
    cout << "p : " << p << endl; //0x61fe0c

    // Dinamik memory allocation .
    int *q = (int *)malloc(sizeof(int) * a);
    q[3] = 70;
    cout << "q : " << q << endl;//0xfd1740
    cout << "*q : " << *q << endl; //16587440
    cout << "q[3] : " << q[3] << endl; //70

    f(a);
    cout << "a : " << a <<endl; //10

    g(&a);
    cout << "a : " << a << endl; //90

    return 0;
}

int f(int s1) // call by value
{
    return s1 = 20;
}

int g(int *s1) // call by referance
{
    return *s1 = 90;
}