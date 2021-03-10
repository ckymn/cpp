#include <iostream>
using namespace std;

//geri donus degeri bir address donecek
int *genislet(int *eskiAlan, int eskiBoyut, int ekelenecek)
{
    int *yeniAlan = new int[eskiBoyut];
    for (int i = 0; i < eskiBoyut; i++)
        yeniAlan[i] = eskiAlan[i];

    delete[] eskiAlan;

    return yeniAlan;
}

int *kucult(int *eskiAlan, int tasinacak)
{
    int *yeniAlan = new int[tasinacak];
    for(int i = 0; i < tasinacak; i++)
        yeniAlan[i] = eskiAlan[i];
    
    delete [] eskiAlan;

    return yeniAlan;
}

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
        a[i] = i * i;

    a = genislet(a, 5, 10); // daha sonra heap'te yeni olusturulan alani a'ya atiyoruz.

    a = kucult(a, 3);

    // for (int i = 0; i < 10; i++)
    //     a[i] = i;
    
    return 0;
}