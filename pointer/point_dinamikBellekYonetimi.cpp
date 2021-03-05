#include <iostream>

using namespace std;

int main()
{

    int elemanSayisi = 0;
    int *eleman;

    cout << "Eleman sayisi: ";
    cin >> elemanSayisi;

    eleman = (int *)malloc(elemanSayisi * sizeof(int));

    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << i + 1 << ". eleman: ";
        cin >> *(eleman + i);
    }

    for (int i = 0; i < elemanSayisi; i++)
    {
        cout << eleman[i] << endl;
    }

    free(eleman);

    return 0;
}