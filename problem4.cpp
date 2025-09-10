#include <iostream>
using namespace std;
int main() {
    int a;
    a = 189;
    char b;
    b = 'B';
    float D;
    cout << "Enter a number and a character: "<< endl;
    cin >> a>> b ;
    D = float(a)/3;
    int decimalValue = b;
    cout << float(D) ;
    cout << "  " << decimalValue ;
    cout << "  " <<  (a+decimalValue)/5 ;
    cout << "  " << b;

    return 0;


}
