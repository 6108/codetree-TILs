#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    int sum = 0;

    cin >> n;
    s = to_string(n);

    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - 48;
    }
    cout << sum;

    return 0;
}