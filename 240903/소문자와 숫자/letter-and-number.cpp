#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    //cout << 'A' - 'a';
    for (int i = 0; i < s.length(); i++) {
        if ('a' <= s[i] && s[i] <= 'z')
            cout << s[i];
        else if ('A' <= s[i] && s[i] <= 'Z')
            cout << (char)(s[i] + 32);
        else if ('0' <= s[i] && s[i] <= '9')
            cout << s[i];
    }    

    return 0;
}