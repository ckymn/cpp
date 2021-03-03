#include <iostream>

using namespace std;

int main()
{
    string password = "yazilim";
    string input;

    cout << "Bir parola giriniz : ";
    cin >> input;

    if(password == input)
    {
        cout << "parola dogru";
    }
    else
    {
        cout << "parola yanlis";
    }

    return 0;
}