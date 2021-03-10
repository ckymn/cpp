#include <iostream>
using namespace std;

struct Dikdortgen 
{
    int Yukseklik;
    int Genislik;
};

int AlanBul(Dikdortgen d1)
{
    d1.Yukseklik = 40;
    d1.Genislik = 20;

    return d1.Genislik * d1.Yukseklik;
}

int main()
{
    Dikdortgen d1;
    d1.Yukseklik = 30;
    d1.Genislik = 60;
    cout << "Genislik : " << d1.Genislik << endl;//60
    cout << "Yukseklik : " << d1.Yukseklik << endl;//30
    
    cout << AlanBul(d1) << endl; //800

    cout << "Genislik : " << d1.Genislik << endl;//60
    cout << "Yukseklik : " << d1.Yukseklik << endl;//30
}
