#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a < b)
        cout << (b < c ? b : c);
    else
        cout << (a < c ? a : c);

    return 0;
}