#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cnt += 2;
            if (cnt % 10 == 0)
                cnt += 2;
            cout << cnt % 10 << ' ';
        }
        cout << '\n';
    }

    return 0;
}