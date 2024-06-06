#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string ans = "";;

    if (str.length() % 2)
        cout << -1;
    else if (str.length() % 4 == 0) {
        for(int i = 0; i < str.length(); i++)
            ans += 'a';
        cout << ans;
    }
    else {
        for(int i = 0; i < str.length() - 2; i++)
            ans += 'a';
        ans += "bb";
        cout << ans;
    }

    return 0;
}