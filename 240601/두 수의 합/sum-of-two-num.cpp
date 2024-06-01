#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a[n];
    unordered_map<int, int> map;

    int m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        a[i] = m;
        map[m] = i;
    }
    for (int i = 0; i < n; i++) {
        int b = k - a[i];
        if (map.find(b) != map.end() && i < map[b])
            cnt++;
    }
    cout << cnt;

    return 0;
}