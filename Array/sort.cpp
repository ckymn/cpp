#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int arr[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
        arr[i] = rand();

    // 4 - 12 - 3 - 1 - 34 - 16
    int tempIndex;
    for (int i = 0; i < 10; i++)
    {
        tempIndex = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] > arr[tempIndex])
            {
                tempIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[tempIndex];
        arr[tempIndex] = temp;

        cout << "K->B siralama : " << arr[i] << endl;
    }
    return 0;
}