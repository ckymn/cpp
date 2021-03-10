#include <iostream>
using namespace std;

struct Insan
{
    char Ad[100];
    char Soyad[100];
    int TCNo;
    int Yas;
};

Insan VeriGir()
{
    Insan ogr;
    cout << "adi giriniz :" << endl;
    cin >> ogr.Ad;
    cout << "soyadi giriniz :" << endl;
    cin >> ogr.Soyad;
    cout << "yasini giriniz :" << endl;
    cin >> ogr.Yas;
    cout << "tc kimlik numarasin :" << endl;
    cin >> ogr.TCNo;

    return ogr;
}

bool Karsilastir(Insan d1, Insan d2)
{
    if (d1.TCNo == d2.TCNo)
        return true;
    return false;
}

int main()
{
    Insan ogr1 = VeriGir();
    Insan ogr2 = VeriGir();

    if (Karsilastir(ogr1, ogr2))
        cout << "Ogrencilerin Tc'leri esittir..." << endl;
    else
        cout << "Ogrecnilerin Tc'leri esit degildir..." << endl;

    return 0;
}
