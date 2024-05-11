#include <iostream>
#include <string>

using namespace std;

int main() {
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int cnt = 0;

    cin >> c;
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (str[i][j] == c) {
                cout << str[i] << '\n';
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}