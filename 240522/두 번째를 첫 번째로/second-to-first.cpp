#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;

    cin >> str;
    c = str[1];
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c)
            str[i] = str[0];
    }
    cout << str;

    return 0;
}