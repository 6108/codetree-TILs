#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    bool satisfied = false;

    cin >> a >> b >> c;
    for (a; a <= b; a++) {
        if (a % c == 0)
            satisfied = true;
    }
    cout << (satisfied ? "NO" : "YES");

    return 0;
}