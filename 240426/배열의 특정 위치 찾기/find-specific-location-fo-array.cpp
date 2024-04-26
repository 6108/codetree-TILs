#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 2 == 0)
            sum += n;
        if (n % 3 == 0)
            avg += n;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg / 3;

    return 0;
}