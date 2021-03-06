#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{

    int sonuc = !-1233232; // 0 disinda herseyin tersi 0'dir(false);

    cout << sizeof(sonuc) << endl;
    cout << typeid(sonuc).name() << endl;

    if(!sonuc)// 0'in tersi 1 dir(true);
    {
        cout << "sonuc degeri : " << sonuc << endl; //0
    }
    return 0;
}