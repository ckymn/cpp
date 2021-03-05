#include <iostream> 
using namespace std;

int main()
{
    int values[] = {1,2,3,4,5,6,7}; //value bir referans degeridir.
    int *ptr = values;

    cout << "1.eleman : " << *ptr << endl;//1
    cout << "2.elaman : " << *(ptr+1) << endl;//2

    for(int i = 0; i < sizeof(values)/sizeof(values[0]) ; i++)
    {
        cout << *(ptr+i) << endl; //1,2,3,4,5,6,7
    }

    for(const int &value : values) //value referans degerine values referans degelerini atiyoruz
    {
        cout << value << endl; //1,2,3,4,5,6,7
    }

    return 0;
}