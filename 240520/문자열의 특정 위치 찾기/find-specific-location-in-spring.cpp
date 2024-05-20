#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;
    int idx = 0;

    cin >> str >> c;
    for (idx; idx < str.length(); idx++) {
        if (str[idx] == c) {
            cout << idx;
            break;
        }
    }
    if (idx == str.length())
        cout << "No";

    return 0;
}