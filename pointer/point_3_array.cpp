#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // array'ler arasi byte degeri "+4"
    cout << arr << endl;     //0x61fe00
    cout << arr + 1 << endl; //0x61fe04
    cout << arr + 2 << endl; // 0x61fe08

    //---------------------------------

    int *p = arr; // burda arr'nin ilk degerinin referans degerini tutar. Diger elemanlara ulasabilmek icin +1 demesi yeterli
    cout << "*p : " << *p << endl; // 1
    cout << "P : " << p << endl; //0x61fe00
    cout << "arr : " << arr << endl; //0x61fe00

    //--------------------------------

    int d[80] , *pointer;
    pointer = d;
    cout << "d : " << d << endl; //0x61fca0 - ilk elemanin referans degerini verir.
    cout << "pointer : " << pointer << endl; //0x61fca0
    cout << "*pointer :  "<< *pointer << endl; //1510035592

    //--------------------------------

    int *ptr1 = &arr[1];
    cout << "ptr1 : " << ptr1 << endl; //0x61fde4
    cout << "*ptr1 : " << *ptr1 << endl; //2
    cout << "arr[1] : " << arr[1] << endl; //2
    cout << "&arr[1] : " << &arr[1] << endl;//0x61fde4

    //------------------------------

    int *ptr = arr;
    cout << ptr << endl;     //0x61fe00
    cout << ptr + 1 << endl; //0x61fe04

    cout << *ptr << endl;       // 1
    cout << *(ptr + 1) << endl; //2
    cout << *(ptr + 2) << endl; //3
    cout << *(ptr + 3) << endl; //4
    cout << ptr[4] << endl;     //5
    cout << ptr[6] << endl;     //! 41
    cout << arr[6] << endl;     //! 41

    return 0;
}