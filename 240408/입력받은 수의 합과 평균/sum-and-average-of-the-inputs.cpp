#include <iostream>

using namespace std;

int main() {
    int n, m;
    int cnt = 0, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        sum += m;
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;

    return 0;
}