#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, string> map;
    unordered_map<string, int> map2;
    string s;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        map[i] = s;
        map2[s] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> s;
        if ('1' <= s[0] && s[0] <= '9') {
            int id = stoi(s);
            cout << map[id] << '\n';
        }
        else {
            cout << map2[s] << '\n';
        }
    }
    return 0;
}