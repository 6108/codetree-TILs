#include <iostream>

using namespace std;

int main() {
    int n, m, max;
    int a[1000] = {};
    int idx;
    int max_idx = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    max_idx = n;
    for (int i = 0; i < n; i++) {
        idx = max_idx;
        max = 0;
        for (int j = 0; j < idx; j++) {
            if (max < a[j]) {
                max = a[j];
                max_idx = j;
            }
        }
        cout << max_idx + 1 << ' ';
        if (max_idx == 0)
            break;
    }

    return 0;
}