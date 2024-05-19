#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, ab, ba;
    int idx = 0;

    cin >> a >> b;
    ab = a + b;
    ba = b + a;

    for (idx; idx < ab.length(); idx++) {
        if (ab[idx] != ba[idx])
            break;
    }
    cout << (idx == ab.length() ? "true" : "false");

    return 0;
}