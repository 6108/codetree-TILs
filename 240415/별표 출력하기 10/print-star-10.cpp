#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;
    // for (int i = 1; i <= n; i ++) {
    //     if (i % 2 == 1) {
    //         for (int j = 0; j < i - cnt; j++)
    //             cout << "* ";
    //     }
    //     else {
    //         for (int j = 0; j < n - cnt; j++)
    //             cout << "* ";
    //             cnt++;
    //     }
    //     cout << '\n';
    // }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << '\n';
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        cout << '\n';
    }
    return 0;
}