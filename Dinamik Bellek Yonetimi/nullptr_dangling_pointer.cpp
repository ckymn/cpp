#include <iostream>
using namespace std;

int main()
{
    // eger olusturdugumuz pointer herhangi bir yere atnamamsi icin nullptr kull.
    int *ptr = nullptr;
    // bu pointer'a yeni bir alan ayiralim
    ptr = new int;
    //daha sonra o alani silelim ama alan silinse bile pointer hala orayi gostericek
    delete ptr;
    // ister burda DAGNLING REFERANS hatasi alacak silindigi halde pointer orayi gosteriyor diye ve run time hatasi alicaz.
    *ptr = 10;
    cout << *ptr << endl; //run time error


    //------------------------------------------------------------

    int *ptr2 = nullptr;
    *ptr2 = 10;
    // ptr'nin gosterdigi adresin aynisi artik ptr2'de gosteriyor.
    ptr2 = ptr; 
    // eger burda delete ptr yaparsak alan memory'e geri veriliyor ama ptr ve ptr2 halen ayni adresi gostermis olacak
    delete ptr;
    // daha sonra eger *ptr2 = 20 yaparsak run time hatasi alicagiz cunku oyle bir alan yok
    *ptr2 = 20;
    cout << *ptr2 << endl; //run time error
    
    return 0;
}