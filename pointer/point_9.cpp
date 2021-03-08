#include <iostream>
using namespace std;

int main()
{
    unsigned sayi = 4294967295;
    int sayi2 = 4294967295;

    cout << sayi << endl;
    cout << sayi2 << endl; // -1 cunku int -2 ~ +2 milayara kadar gidebilir.

    cout << &sayi << endl;
    cout << &sayi2 << endl;

    // & : referans cagiran 
    // * : referans tutan
    // *(pointer) yeni bir adres ayiracak ve icine tuttugu degiskenin referans numarasini yazicak !
    // *(pointer)'larin gorevlerinden birde tuttuklari adresin hafiza hucresini manipule edebilir.


    int number = 5;
    int* p;
    p = &number;
    cout << "Number : " << &number << endl; //0x61fe0c
    cout << "*(pointer) :" << p << endl; //0x61fe0c
    cout << "*(pointer) value : " << *p << endl; //5

    *p = 220; // burda *0x61fe0c gerceklesiyor. daha sonra referansin referansi aslinda 5 degerini veriyor. 5 = 220 degerini atiyoruz.
    cout << "referans :" << p << endl;
    cout << "referansin referansina deger atama : " << *p << endl;//220 

    char character = 'M';
    char *m;
    m = &character; // burda tur donusumu lazim cunku *(pointer) 4'byt lik veri cekmesi gerekiyor.
    cout << "character : " << &character << endl;//M
    cout << "*(pointer) : " << m << endl;//M
    cout << "*(pointer) value : " << *m << endl;//M

    return 0;
}