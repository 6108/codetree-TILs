#include <iostream>

using namespace std;

int main() {
    int n, min;
    int n_arr[100];
    int cnt = 0;

    cin >> n >> n_arr[0];
    min = n_arr[0];
    for (int i = 1; i < n; i++) {
        cin >> n_arr[i];
        if (n_arr[i] < min)
            min = n_arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (min == n_arr[i])
            cnt++;
    }
    cout << min << ' ' << cnt;

    return 0;
}