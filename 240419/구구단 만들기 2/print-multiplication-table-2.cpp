#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    for (int i = 2; i <= 8; i += 2) {
        for (int j = b; a <= j; j--) {
            cout << j << " * " << i << " = " << j * i;
            cout << (j == a ? "\n" : " / ");
        }
    }

    return 0;
}