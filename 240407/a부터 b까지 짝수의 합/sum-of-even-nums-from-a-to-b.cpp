#include <iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;

    cin >> a >> b;
    for (a; a <= b; a++) {
        if (a % 2 == 0)
            sum += a;
    }
    cout << sum;
    
    return 0;
}