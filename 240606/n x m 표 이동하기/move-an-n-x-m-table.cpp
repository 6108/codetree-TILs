#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> arr[n][m];
    }

    int x = 0;, y = 0;
    int a, b, c;
    while (x < n && y < m) {
        sum += arr[x][y];
        a = arr[x][y + 1];
        b = arr[x + 1][y + 1];
        c = arr[x + 1][y];
        if (a < b && b < c) {
            x++;
        }
        else if (a < b && c < b)

    }   

    return 0;
}