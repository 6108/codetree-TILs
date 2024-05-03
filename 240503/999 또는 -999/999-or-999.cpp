#include <iostream>

using namespace std;

int main() {
    int n[100] = {};
    int idx = 0;
    int min = 1000;
    int max = -1000;

    for (idx; idx < 100; idx++) {
        cin >> n[idx];
        if (n[idx] == 999 || n [idx] == -999)
            break;
    }
    for (int i = 0; i < idx; i++) {
        if (n[i] < min)
            min = n[i];
        if (max < n[i])
            max = n[i];
    }
    cout << max << ' ' << min;

    return 0;
}