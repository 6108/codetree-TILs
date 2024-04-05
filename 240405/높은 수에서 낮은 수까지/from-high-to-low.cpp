#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    if (a < b) {
        for (b; b >= a; b--)
            cout << b << ' ';
    }
    else {
        for (a; a >= b; a--)
            cout << a << ' ';
    }
    
    return 0;
}