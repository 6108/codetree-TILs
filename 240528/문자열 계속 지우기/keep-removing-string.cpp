#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, b.length()) == b) {
            a.erase(i, b.length());
            i = -1;
        }
    }
    cout << a;

    return 0;
}