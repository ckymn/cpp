#include <iostream>
using namespace std;

void changePointer(int* a , int* b);

int main()
{
    int sayi1, sayi2;
    sayi1 = 12;
    sayi2 = 24;

    cout << "before a ve b degerleri : " << sayi1 << "--" << sayi2 << endl;//12 -- 24

    changePointer(&sayi1, &sayi2);

    cout << "change a ve b degerleri : " << sayi1 << "--" << sayi2 << endl; //20 -- 40

    return 0;
}

void changePointer(int* a, int* b)
{

    *a = 20;
    *b = 40;

    cout << "a ve b referanslari : " << a << "--" << b << endl;
    cout << "a ve b degerleri : " << *a << "---" << *b << endl; //20 -- 40
}