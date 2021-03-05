#include <iostream> 
using namespace std;

int degerFonk1(int sayi)
{
    sayi = 100;
};

int degerFonk2(int *sayi)
{
    *sayi = 100;
};



int main()
{
    int sayi = 200;

    degerFonk1(sayi);
    cout << sayi << endl;//200
    degerFonk2(&sayi);
    cout << sayi << endl;//100

    return 0;
}