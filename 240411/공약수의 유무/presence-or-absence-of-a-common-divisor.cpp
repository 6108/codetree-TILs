#include <iostream>

using namespace std;

int main() {
    int a, b;
    bool satisfied = false;

    cin >> a >> b;
    for (a; a <= b; a++) {
        if (1920 % a == 0 && 2880 % a == 0)
            satisfied = true;
    }
    cout << (satisfied ? 1 : 0);

    return 0;
}