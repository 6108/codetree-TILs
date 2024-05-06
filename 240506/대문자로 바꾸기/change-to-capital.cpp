#include <iostream>

using namespace std;

int main() {
    char n;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> n;
            n += 'A' - 'a';
            cout << n << ' ';
        }
        cout << '\n';
    }

    return 0;
}