#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    char t[] = "Sel";
    
    cout << a << endl;//0x61fe00
    cout << t << endl;//Sel

    int* p = a; // array'ler referans adresleri ile tasinir.

    cout << p << endl;//0x61fe00
    cout << *(p+2) << endl;//3 ==>> *(x17efe5 + 2*4) 4 byt'lik alan kapladikalari icin 
    cout << *(p+6) << endl;// ! olmadigi halde hata vermeden clisir.
    cout << p[0] << endl;//1

}