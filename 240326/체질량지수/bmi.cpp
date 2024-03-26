#include <iostream>
using namespace std;

int main() {
    int b;
    int h, w;

    cin >> h >> w;
    b = (float)10000 * w / h / h;
    cout << fixed;
    cout.precision(1);
    cout << b;
    if (b >= 25)
        cout << "\nObesity";
    return 0;
}