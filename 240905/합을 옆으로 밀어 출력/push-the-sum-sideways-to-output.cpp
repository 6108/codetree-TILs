#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    int sum = 0;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        sum += m;
    }
    
    s = to_string(sum);
    cout << s.substr(1, s.length() - 1) + s[0];

    return 0;
}