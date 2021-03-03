#include <iostream>

using namespace std;

int main() 
{
    int sayi;
    cout << "Bir sayi degeri giriniz : ";
    cin >> sayi;
    int faktoriyel=1;
    for(int i = 1; i <= sayi; i++)
    {
        faktoriyel *= i;
        cout << i <<".Faktoriyel : " << faktoriyel << endl;
    }

    return 0;

}