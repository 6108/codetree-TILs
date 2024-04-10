#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0, sum = 0;

    while(true) {
        cin >> n;
        if (n / 10 != 2)
            break;
        sum += n;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum / cnt;
    
    return 0;
}