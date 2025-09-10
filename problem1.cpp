#include <iostream>
using namespace std;

int main() {
    int intNumber;
    intNumber = 250;
    float floatNumber;
    floatNumber= 3.14;
    double doubleNumber;
    doubleNumber= 45.1234;
    bool boolNumber;
    boolNumber= true;
    char charName;
    charName = 'A';
    cout << "Value of integer is " << intNumber << ". Size is " << sizeof(intNumber)<< endl;
    cout << "Value of Float is " <<floatNumber << ". Size is " << sizeof(floatNumber)<< endl;
    cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber)<< endl;
    cout << "Value of Boolean is " <<boolNumber << ". Size is " << sizeof(boolNumber) << endl;
    cout << "Value of Char is " << charName << ". Size is" << sizeof(charName) << endl;


    return 0;

}
