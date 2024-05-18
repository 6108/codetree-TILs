#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    char c;
    int cnt = 0;

    cin >> a;
    c = a[0];
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == c)
            cnt++;
        else {
            b += c + to_string(cnt);
            c = a[i];
            cnt = 1;
        }
    }
    b += c + to_string(cnt);
    cout << b.length() << '\n' << b;

    return 0;
}