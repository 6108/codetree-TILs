#include <iostream>

using namespace std;

int main() {
    int n, m;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 == 1 && m % 3 == 0)
            sum += m;
    }
    cout << sum;
    
    return 0;
}