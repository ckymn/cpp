#include <iostream>
using namespace std;

void factorial(int number)
{
    int factorial = 1;
    for(int i = 1; i <= number; i++)
    {
        factorial *= i;
        cout << "Faktoriyel : " << factorial << endl;
    }
    cout << factorial;
}

int main()
{
    factorial(5);
    return 0;
}

