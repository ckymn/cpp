#include <iostream>
using namespace std;

int Factorail(int val)
{
    int sayi = 1;
    for (int i = 1; i <= val; i++)
    {
        sayi *= i;
    }
    cout << sayi << endl;
    return sayi;
}

int UstAl(int sayi, int ust);

int main()
{
    int sayi;
    cout << "whic are you find Factorial : " << endl;
    cin >> sayi;
    Factorail(sayi);

    int ust = UstAl(2,3);
    cout << "ust al fonksiyonu : " << ust << endl;

    return 0;
}

int UstAl(int sayi, int ust)
{
    int result = 1;
    for (int i = 0; i < ust; i++)
    {
        result *= sayi;
    }
    return result;
}