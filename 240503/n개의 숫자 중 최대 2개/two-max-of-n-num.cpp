#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    int a[100], b[100];
    int max;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        max = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (max < a[j]) {
                max = a[j];
                a[j] = INT_MIN;
            }
        }
        b[i] = max;
    }
    cout << b[0] << ' ' << b[1];

    return 0;
}