#include <iostream>
using namespace std;

struct byteNumber
{
    int id;
    char letter;
    string name;
    float idd;
    double iddd;
};



int main()
{
  
    cout << "Char : " << sizeof(char) << endl; //1-8bit
    cout << "Integer : " << sizeof(int) << endl; //4-32bit
    cout << "Float : " << sizeof(float) << endl; //4-32bit
    cout << "Dobule : " << sizeof(double) << endl;//8-64bit
    cout << "string : " << sizeof(string) << endl;//32-256bit
    cout << "Struct : " << sizeof(byteNumber) << endl;//56-56*8bit (4+1+32+4+8+ compiler ekstradan veriyor)
    int values[] = {1,23,4,4,5};
    cout << "array : " << sizeof(values) << endl; //20-160bit

    return 0;
}