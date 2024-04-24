#include <iostream>

using namespace std;

int main() {
    double n;
    double sum = 0;

    for (int i = 0; i < 8; i++) {
        cin >> n;
        sum += n;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;
    
    return 0;
}