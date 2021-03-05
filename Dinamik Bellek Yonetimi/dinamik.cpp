#include <iostream>
using namespace std;

int main()
{
    //memory'de dinamik alan ayirma islemi new anahtar ile yapiliyor.
    int *ptr;
    int size;
    ptr = new int[size];

    cout << "kac deger sakliycaksiniz : " <<endl;
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout << "Degeriniz : ";
        cin >> ptr[i];
    }

    for(int i = 0; i < size; i++)
    {
        cout << "Giridiginiz Degerler : " << ptr[i] << endl;
    }
    
    delete [] ptr; // bu ise bellekteki tum elemanlari kaldirir ve dinamik memory ile islemlerimizi daha effective halledebiliriz.

    return 0;
}