#include <iostream>
using namespace std;

void referans(int &ref)
{
    ref = 10;
}

int main()
{
    /**
     * int a =10;
     * int &ref;
     * ref = a; | boyle birsey diyemiyoruz initializer etmemiz gerekiyor hemen | ve bunlardan dolayi referanslari VERI YAPILARI'nda kullanmiyoruz 
    */
    int a = 20;
    cout << "a nin ilk degeri : " << a << endl; //20

    referans(a); //! burda pointer'da (&a) referans degeri gondermen gerekiyordu ama ref'te (a) degeri gonderebiliyorsun

    cout << "a nin ikinci degeri : " << a << endl; //10

    return 0;
}