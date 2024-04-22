#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int product = 1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        product = 1;
        for (a; a <= b; a++)
            product *= a;
        cout << product << '\n';
    }

    return 0;
}