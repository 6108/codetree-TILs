#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a <= b)
        cout << (b < c ? c : b);
    else 
        cout << (a < c ? c : a);

    return 0;
}