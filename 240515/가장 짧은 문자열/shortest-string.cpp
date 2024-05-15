#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[3];
    int ans;

    cin >> str[0] >> str[1] >> str[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (str[j].length() > str[j + 1].length()) {
                string temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    ans = str[2].length() - str[0].length();
    cout << ans;

    return 0;
}