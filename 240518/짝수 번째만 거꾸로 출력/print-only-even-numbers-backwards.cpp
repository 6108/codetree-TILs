#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cin >> str;
    for (int i = str.length() - 1; 0 <= i; i--) {
        if (i % 2)
            cout << str[i];
    }

    return 0;
}