#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a < b && a < c)
        cout << (b < c ? b : c);
    else if (b < c && b < a)
        cout << (c < a ? c : a);
    else
        cout << (a < b ? a : b);

    return 0;
}