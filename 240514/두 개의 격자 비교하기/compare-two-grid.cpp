#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m], c[n][m];

    //입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    }

    //비교
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == b[i][j])
                c[i][j] = 0;
            else
                c[i][j] = 1;
        }
    }

    //출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << c[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}