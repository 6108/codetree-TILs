#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int q;
    cin >> q;

    int n;
    for (int i = 0; i < q; i++) {
        cin >> n; 
        if (n == 1) {
            s = s.substr(1, len - 1) + s.substr(0, 1);
        }
        else if (n == 2) {
            s = s.substr(len - 1, 1) + s.substr(0, len - 1);
        }
        else {
            for (int j = 0; j < len / 2; j++) {
                char c = s[j];
                s[j] = s[len - j - 1];
                s[len - j - 1] = c;
            }
                
        }
        cout << s << '\n';
    }

    return 0;
}