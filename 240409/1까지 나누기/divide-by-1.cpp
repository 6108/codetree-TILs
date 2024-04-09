#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;
    for (int i = 1; i < 100; i++) {
        n /= i;
        cnt++;
        if (n <= 1) {
            cout << cnt;
            break;
        }
    }

    return 0;
}