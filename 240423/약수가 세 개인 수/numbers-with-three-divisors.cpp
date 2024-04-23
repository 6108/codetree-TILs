#include <iostream>

using namespace std;

int main() {
    int start, end, cnt;
    int ans = 0;

    cin >> start >> end;
    for (start; start <= end; start++) {
        cnt = 0;
        for (int i = 1; i <= start; i++) {
            if (start % i == 0)
                cnt++;
        }
        if (cnt == 3)
            ans++;
    }
    cout << ans;

    return 0;
}