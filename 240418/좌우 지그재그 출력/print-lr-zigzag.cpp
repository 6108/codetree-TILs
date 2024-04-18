#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for (int j = 0; j < n; j++) {
                cnt++;
                cout << cnt << ' ';
            }
            cnt = cnt + n + 1;
            
        }
        else {
            for (int j = 0; j < n; j++) {
                cnt--;
                cout << cnt << ' ';
            }
            cnt = cnt + n - 1;
        }
        cout << '\n';
    }

    return 0;
}