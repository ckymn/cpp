#include <iostream>
using namespace std;

void printArray(const int *ptr1, const int *ptr2)
{
    //* normalde const'in gosterdigi yerin degeri degistirilemiyordu . 
    //! burda dikkat edilemsi gerken "const" burda degiskeni degil , pointer'i gosteriyor. ve pointer degeri degisebilir
    //?burda eger *ptr1 = 100; olsaydi hata verirdi cunku gosterdigi yerin degerini degistiremiyoruz , asagida ise pointer degerini degistiriyoruz.
    for(; ptr1 != ptr2; ptr1++)
    {
        cout << "Cikan Elemanlar : "<< *ptr1 << endl;
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    printArray(a+2,a+7);
    return 0;
}

