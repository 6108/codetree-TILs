#include <iostream>

using namespace std;

int main() {
    int n, cnt;

    cin >> n;
    for (int i = 2; i <= n; i++) {
        cnt = 0;
        for (int j = 2; j < i; j++) {
            if (n % i == 0)
                continue;
            cnt++;
        }
        if (cnt == 0)
            cout << i << ' ';
    }
    
    return 0;
}