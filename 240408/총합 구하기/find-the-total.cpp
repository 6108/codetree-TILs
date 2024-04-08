#include <iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;

    cin >> a >> b;
    for (a; a <= b; a++) {
        if (a % 6 == 0 && a % 8 != 0) 
            sum += a;
    }
    cout << sum;

    return 0;
}