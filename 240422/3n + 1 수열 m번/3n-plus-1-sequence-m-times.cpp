#include <iostream>

using namespace std;

int main() {
    int n, m, cnt;

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        cnt = 0;
        while(n != 1) {
            if (n % 2)
                n = 3 * n + 1;
            else
                n /= 2;
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}