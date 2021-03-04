#include <iostream>
using namespace std;

void printArray(int *ptr, int size)
{
    // array degerimizi [] sekilde gonderip ve array boyutu(size)'nuda belirtmemiz gerekiyor.
    // diger bir tanimlama yontemi *ptr ile tanimlamak.
    for(int i = 0; i < size ; i++)
    {
        cout << ptr[i] << endl;
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    printArray(a,5);

    return 0;
}