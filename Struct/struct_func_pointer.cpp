#include <iostream>
using namespace std;

struct Dortgen
{
    int Yukseklik;
    int Genislik;
};

Dortgen *genislet(Dortgen *eskialan, int eskiBoyut, int eklenecek)
{

    Dortgen *yenialan = new Dortgen[eskiBoyut + eklenecek];
    //Burda farkli bir yontem var dikkat :(
    // burda islemi derleyiciye biraktigimiz icin . ile erisiyoruz.(-> kullanmadik)
    for (int i = 0; i < eskiBoyut; i++)
    {
        yenialan[i].Genislik = eskialan[i].Genislik;
        yenialan[i].Yukseklik = eskialan[i].Yukseklik;
    }

    //for dongusu yerine kullanabilecegin islem
    //memcpy(yenialan,eskialan,eskiBoyut*sizeof(Dortgen));

    delete[] eskialan;
    return yenialan;
}

int main()
{
    Dortgen *p = new Dortgen[5];

    for (int i = 0; i < 5; i++)
    {
        p[i].Genislik = i * i;
        p[i].Yukseklik = i * 10;
    }

    p = genislet(p, 5, 5);

    for (int i = 5; i < 10; i++)
    {
        p[i].Genislik = i * i;
        p[i].Yukseklik = i * 10;
    }
    return 0;
}