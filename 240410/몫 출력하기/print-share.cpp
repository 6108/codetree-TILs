#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    while(true) {
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << '\n';
            cnt++;
        }
        if (3 <= cnt)
            break;
    }
    
    return 0;
}