#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 100;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cnt--;
            if (cnt % 10 == 0)
                cnt--;
            cout << cnt % 10;
        }
        cout << '\n';
    }

    return 0;
}