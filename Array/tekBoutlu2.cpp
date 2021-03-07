#include <iostream>
#include <time.h>   
using namespace std;

int main()
{
    int sayilar[10];
    // besleme fonk. srand() islemci her calistigi durumda artan ve rand() ile kullanilirisa rand() standart disina cikar
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        sayilar[i] = rand();
        cout << sayilar[i] << endl;    
    }

    int tekToplam;
    int cifToplam;
    for(int i = 0; i < 10; i++)
    {
        if(sayilar[i] % 2 != 0)
        {
            cout << "tek sayilar : " << sayilar[i] << endl;
            tekToplam += sayilar[i];
        }
        else
        { 
            cout << "cift sayilar : " << sayilar[i] << endl;
            cifToplam += sayilar[i];
        }
    }
    cout << "tek Toplam : "  << tekToplam << endl;
    cout << "cift Toplam : " << cifToplam << endl;
    return 0;
}