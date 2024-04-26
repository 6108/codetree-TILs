#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    double avg = 0;

    for (int i = 1; i <= 10; i++) {
        cin >> n;
        if (i % 2 == 0)
            sum += n;
        if (i % 3 == 0)
            avg += n;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg / 3;

    return 0;
}