#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << b;
    else if (b < c && c < a)
        cout << c;
    else
        cout << a;

    return 0;
}