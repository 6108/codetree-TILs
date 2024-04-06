#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 == 1 && m % 3 == 0)
            cout << m << '\n';
    }
    
    return 0;
}