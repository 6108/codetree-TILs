#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0, sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if(0 <= n && n <= 200) {
            sum += n;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;

    return 0;
}