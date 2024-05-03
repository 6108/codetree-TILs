#include <iostream>

using namespace std;

int main() {
    int n, a, idx;
    int b[1001] = {};
    int max = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        b[a]++;
    }

    for (idx = 1000; 0 <= idx; idx--) {
        if (b[idx] == 1) 
            break;
    }

    cout << (idx ? idx : -1);

    return 0;
}