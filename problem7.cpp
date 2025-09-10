#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "enter two numbers: ";
    cin >> x >> y;
    double t;
    t = (( double(3)*x*x + double(9) )/( double(y)/double(4) + double(3)));
    cout << double(t) << endl;
    return 0;

}