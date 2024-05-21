#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int idx = 0;

    cin >> a >> b;
    for (idx; idx < a.length(); idx++) {
        if (a.substr(idx, b.length()) == b) {
            cout << idx;
            break;
        }
    }
    if (idx == a.length())
        cout << -1;

    return 0;
}