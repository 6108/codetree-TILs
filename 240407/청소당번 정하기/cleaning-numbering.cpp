#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt2 = 0, cnt3 = 0, cnt12 = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        if (n % 12 == 0)
            cnt12++;
        else if (n % 3 == 0)
            cnt3++;
        else if (n % 2 == 0)
            cnt2++;
    }
    cout << cnt2 << ' ' << cnt3 << ' ' << cnt12;

    return 0;
}