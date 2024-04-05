#include <iostream>

using namespace std;

int main() {
    char c;
    int n;

    cin >> c >> n;
    if (c == 'A') {
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
    }
    else {
        for (n; n > 0; n--)
            cout << n << ' ';
    }
        
    return 0;
}