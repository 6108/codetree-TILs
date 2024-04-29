#include <iostream>

using namespace std;

int main() {
    int n, m;
    int arr[10] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        arr[m]++;
    }
    for (int i = 1; i <= 9; i++)
        cout << arr[i] << '\n';

    return 0;
}