#include <iostream>

using namespace std;

int main() {
    int n[20];

    cin >> n[0] >> n[1];
    for (int i = 0; i < 10; i++) {
        n[i + 2] = (n[i] + n [i + 1]) % 10;
        cout << n[i] << ' ';
    }
    return 0;
}