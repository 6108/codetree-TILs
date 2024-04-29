#include <iostream>

using namespace std;

int main() {
    int n[100];

    cin >> n[0] >> n[1];
    for (int i = 2; i < 12; i++) {
        n[i] = n[i - 1] + 2 * n[i - 2];
        cout << n[i - 2] << ' ';
    }

    return 0;
}