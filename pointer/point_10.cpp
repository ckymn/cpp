#include <iostream>
using namespace std;

void Arttir(int* a)
{

    (*a)++;
    cout << "a :" << a << endl;//:0x61fe1c
    cout << "*a :" << *a << endl;//121
}

int main()
{
    int sayi = 120;
    cout << "Arttirdiktan once : " << sayi << endl;//120

    Arttir(&sayi);

    cout << "Arttirdiktan sonra : " << sayi << endl;//121


    return 0;
}