#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int cnt = 0;

    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, 2) == b)
            cnt++;
    }
    cout << cnt;

    return 0;
}