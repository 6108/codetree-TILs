#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int cnt = 0;

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (j % 2)
                a[n - i - 1][j] = cnt;
            else
                a[i][j] = cnt;
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}