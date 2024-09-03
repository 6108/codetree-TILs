#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if ('a' <= s[i] && 'a' <= 'z')
            cout << (char)(s[i] - 32);
        else 
            cout << (char)(s[i] + 32);
    }
    
    return 0;
}