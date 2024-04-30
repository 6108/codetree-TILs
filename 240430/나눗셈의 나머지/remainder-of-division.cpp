#include <iostream>

using namespace std;

int main() {
    int a, b;
    int mod[10] = {};
    int ans = 0;

    cin >> a >> b;
    while (0 < a) {
        mod[a % b]++;
        a = a / b;
    }
    for (int i = 0; i < b; i++)
        ans += mod[i] * mod[i];
    cout << ans;

    return 0;
}