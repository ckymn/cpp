#include <iostream>

using namespace std;

int main()
{
    //continue islemi while dongulerinde sikinti yaratabilir dikkat !

    for(int i = 0; i < 10; i++)
    {
        if(i == 3 || i == 5)
        {
            continue;
        }
        cout << "i : " << i << endl;
    }
    return 0;
}