#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    if (a % 2)
        a++;
    if (b % 2)
        b--;
    for (int i = 1; i <= 9; i++) {
        for (int j = b; a <= j;) {
            cout << j << " * " << i << " = " << j * i;
            cout << (j == a ? "\n" : " / ");
            j -= 2;
        }
    }

    return 0;
}