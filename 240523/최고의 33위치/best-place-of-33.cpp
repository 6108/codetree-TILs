#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    int size = (n - 2) * (n - 2);
    int cnt[size];
    int idx = 0;
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < size; i++)
        cnt[i] = 0;
        
    for (int i = 0; i < n - 2; i++) {
        cnt[idx] = 0;
        for (int j = 0; j < n - 2; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (a[i + k][j + l] == 1) {
                        cnt[idx]++;
                    }
                }
            }
            idx++;
        }
    }
    
    for (int i = 0; i < (n - 2) * (n - 2); i++) {
        if (max < cnt[i])
            max = cnt[i];
    }
    cout << max;

    return 0;
}