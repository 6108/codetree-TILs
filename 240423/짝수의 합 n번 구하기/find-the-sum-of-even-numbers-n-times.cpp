#include <iostream>

using namespace std;

int main() {
    int n, a, b, sum;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum = 0;
        for (a; a <= b; a++) {
            if (a % 2 == 0)
                sum += a;
        }
        cout << sum << '\n';
    }

    return 0;
}