#include <iostream>

using namespace std;

int main()
{

    int sayi = 1453;
    int *ptr = &sayi;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    int ****pppptr = &ppptr;

    cout << sayi << endl;
    cout << *ptr << endl;
    cout << **pptr << endl;
    cout << ***ppptr << endl;
    cout << ****pppptr << endl;

    return 0;
}