#include <iostream>
using namespace std;

int main()
{
    char strMer[20];

    int sayi = 234;
    int k = sayi;
    int basamakDegeri = 0;
    while(sayi != '/0')
    {
        int kalan = sayi % 10;//4
        sayi = (sayi-kalan)/10;//23

        basamakDegeri++;
    }

    strMer[basamakDegeri] = '\0';

    return 0;
}