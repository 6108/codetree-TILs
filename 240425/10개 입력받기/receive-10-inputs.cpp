#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0, cnt = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n == 0)
            break;
        sum += n;
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;

    return 0;
}