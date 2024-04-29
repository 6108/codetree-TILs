#include <iostream>

using namespace std;

int main() {
    int n[100] = {1, };

    cin >> n[1];
    for (int i = 0; i < 100; i++) {
        n[i + 2] = n[i] + n[i + 1];
        cout << n[i] << ' ';
        if (100 <= n[i])
            break;
    }
    return 0;
}