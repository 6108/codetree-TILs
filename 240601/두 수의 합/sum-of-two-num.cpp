#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a;
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        cin >> a;
        map[i] = a;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (map[i] + map[j] == k)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}