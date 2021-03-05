#include <iostream>
using namespace std;

int main()
{
    int  a[] = {1,2,3,45,6,7,0};

    for(const int item:a)
    {
        cout << item << endl;
    }
    return 0;
}