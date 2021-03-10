#include <iostream>
using namespace std;

// islemlerimiz strcut oldugu zaman degiskenlere -> ile erisebiliyoruz.
// !AMA C++ GELISTIRICILERI -> ORTADAN KALDIRMAK ICIN * YERINE & REFERANSINI KULLANIYORLAR. ASSAGIDAKI SONUCALR BULUNUR.
// ! & ISARETINI PARAMETRE KULLANIMIDA COK ISE YARAYAN BIR GELISME. ANCAK HEAP ALANINDA ISLEMLER GERCEKLESIYORSA -> GECMEK ZORUNDA KALIYORUZ
struct Dikdortgen
{
    int Yukseklik;
    int Genislik;
};

int AlanBul(Dikdortgen& d1)
{
// pointerda degisken degerlerine erismek icin -> kullaniyoruz..
    cout << "*d1 referansi : " << &d1 << endl;//0x61fe18 : Burda d1.Yukseklik ile ayni referansi gosterir cunku ilk olusacak degisken degeri yukseklik 
    d1.Genislik = 20;
    d1.Yukseklik = 40;

    return d1.Yukseklik * d1.Genislik;
}

int main()
{
    Dikdortgen d1;
    d1.Yukseklik = 200;
    d1.Genislik = 100;
    cout << "Ilk Yukseklik ve Genislik Degeri : " << d1.Yukseklik << "-" << d1.Genislik << endl;//200-100
    cout <<"d1.Yukseklik referansi : " << &d1.Yukseklik << endl;//0x61fe18
    cout << "d1.Genislik referansi : " << &d1.Genislik << endl;//0x61fe1c

    cout << AlanBul(d1) << endl; // 800

    cout << "Ilk Yukseklik ve Genislik Degeri : " << d1.Yukseklik << "-" << d1.Genislik << endl;//40-20
    cout <<"d1.Yukseklik referansi : " << &d1.Yukseklik << endl;//0x61fe18
    cout << "d1.Genislik referansi : " << &d1.Genislik << endl;//0x61fe1c

    return 0;
}
