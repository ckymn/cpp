#include <iostream>
using namespace std;

int main ()
{
    int* ptr;
    int size;
    cout << "kac deger sakliycaksiniz : ";
    cin >> size;

    ptr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout << i+1 << ".deger : ";
        cin >> ptr[i];
    }

    for(int i = 0; i < size; i++)
        cout <<"elemanlar : " << ptr[i] << endl;
    
    delete [] ptr;

    return 0;
}
