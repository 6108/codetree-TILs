#include <iostream>

using namespace std;

int main() {
    int n[10];
    int sum = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n[i];
        if (250 <= n[i])
            break;
        sum += n[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum/cnt;

    return 0;
}