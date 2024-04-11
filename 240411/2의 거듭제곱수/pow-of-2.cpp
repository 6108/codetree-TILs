#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 1;
    
    cin >> n;
    while (2 < n) {
        n /= 2;
        cnt++;
    }
    cout << cnt;
    
    return 0;
}