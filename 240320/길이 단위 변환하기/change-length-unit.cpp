#include <iostream>
using namespace std;

int main() {
    float a = 9.2, b = 1.3;
    float ft = 30.48, mi = 160934;

    cout << fixed;
    cout.precision(1);
    cout << a << "ft = " << a * ft << "cm\n";
    cout << b << "mi = " << b * mi << "cm";
    return 0;
}