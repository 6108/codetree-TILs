#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n][n];
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            int a = m[i][j] + m[i][j + 1] + m[i][j + 2];
            if (max < a)
                max = a;
        }
    }
    cout << max;
    
    return 0;
}