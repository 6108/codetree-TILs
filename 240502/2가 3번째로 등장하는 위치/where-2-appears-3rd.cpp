#include <iostream>

using namespace std;

int main() {
    int n, m;
    int cnt = 0, idx = 0;

    cin >> n;
    for (idx; idx < n; idx++) {
        cin >> m;
        if (m == 2)
            cnt++;
        if (cnt == 3)
            break;
    }
    cout << idx + 1;

    return 0;
}