#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        if (!('0' <= a[i] && a[i] <= '9')) {
            a = a.substr(0, i);
            break;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (!('0' <= b[i] && b[i] <= '9')) {
            b = b.substr(0, i);
            break;
        }
    }

    cout << stoi(a) + stoi(b);
    
    return 0;
}