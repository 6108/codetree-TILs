#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    string command;
    unordered_map<int, int> map;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "add") {
            int k, v;
            cin >> k >> v;
            map[k] = v;
        }
        else if (command == "remove") {
            int k;
            cin >> k;
            map.erase(k);
        }
        else if (command == "find") {
            int k;
            cin >> k;
            if (map.find(k) != map.end())
                cout << map[k] << '\n';
            else
                cout << "None\n";
        }
    }
    
    return 0;
}