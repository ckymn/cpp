#include <iostream>
using namespace std;

int main()
{
    int* ptr; 
    int a[] = {1,2,3,4,5};
    ptr = a;

    cout << ptr[1] << endl; //bu arr[1] ile ayni isi yapar. // 2
    cout << *(ptr +1) << endl; // 2


    int* ptr2 = new int;
    *ptr2 = 5;

    //islemleri yaptiktan sonra 
    delete ptr2;

    return 0;
}