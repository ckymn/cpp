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

int main()
{
    int sayi;
    cout << "whic are you find Factorial : " << endl;
    cin >> sayi;

    Factorail(sayi);
    return 0;
}