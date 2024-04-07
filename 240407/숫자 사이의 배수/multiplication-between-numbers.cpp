#include <iostream>

using namespace std;

int main() {
    int a, b;
    int cnt = 0, sum = 0;

    cin >> a >> b;
    for (a; a <= b; a++) {
        if (a % 5 == 0 || a % 7 == 0) {
            cnt++;
            sum += a;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;

    return 0;
}