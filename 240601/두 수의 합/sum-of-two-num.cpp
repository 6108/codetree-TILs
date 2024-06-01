#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    unordered_map<int, int> map;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;

        int b = k - a;
        if (map.find(b) != map.end())
            cnt += map[b];

        if (map.find(a) != map.end())
            map[a]++;
        else
            map[a] = 1;
    }
    cout << cnt;

    return 0;
}