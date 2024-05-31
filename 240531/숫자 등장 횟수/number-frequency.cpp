#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    int num;
    unordered_map<int, int> map;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (map.find(num) != map.end())
            map[num] += 1;
        else
            map[num] = 1;
    }
    
    for (int i = 0; i < m; i++) {
        cin >> num;
        cout << map[num] << ' ';
    }
    
    return 0;
}