#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    unordered_map <string, int> map;
    string str;
    vector<string> key;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (map.find(str) != map.end())
            map[str] += 1;
        else {
            map[str] = 1;
            key.push_back(str);
        }
    }

    int max = 0;
    for (int i = 0; i < key.size(); i++) {
        if (max < map[key[i]])
            max = map[key[i]];
    }
    cout << max;

    return 0;
}