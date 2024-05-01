#include <iostream>

using namespace std;

int main() {
    int n, q;
    int m[100];
    int a, b, c;
    int idx = 0;

    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> m[i];
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        if (a == 1)
            cout << m[b - 1] << '\n';
        else if (a == 2) {
            idx = 0;
            for (idx; idx < n; idx++) {
                if (m[idx] == b)
                    break;                
            }
            cout << (idx == n ? 0 : idx + 1) << '\n';
        }
        else {
            cin >> c;
            for (b; b <= c; b++)
                cout << m[b - 1] << ' ';
            cout << '\n';
        }
    }
    return 0;
}