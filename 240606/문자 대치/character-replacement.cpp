#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string ans = "";

    for (int i = 0; i < str.length();) {
        if (str[i] == '.') {
            ans += '.';
            i++;
        }
        else if (str.substr(i, 4) == "XXXX") {
            ans += "aaaa";
            i += 4;
        }
        else if (str.substr(i, 2) == "XX") {
            ans += "bb";
            i += 2;
        }
        else {
            break;
        }
    }

    if (ans.length() == str.length())
        cout << ans;
    else
        cout << -1;

    return 0;
}