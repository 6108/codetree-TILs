#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        cout << m * m << ' ';
    }

    return 0;
}