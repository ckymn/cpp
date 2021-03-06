#include <iostream>
using namespace std;

int toplam;
int main()
{
   /* for(int i = 0; i < 100; i++)
    {
        toplam += i;
        cout << i << ".toplam : " << toplam << endl;
    } */

    int j=6;
    for(; (j < 10)&&(j>5);j++)
    {
        
        cout << "Eger j degeri 5'ten buyuk ve 10'dan kucuk ise islemler gerceklestirilebilir..."<< endl;
        
        if(j==8)
            break;
        
        cout << "global degesken degeri : " << toplam << endl;
        
    }
    return 0;   
}