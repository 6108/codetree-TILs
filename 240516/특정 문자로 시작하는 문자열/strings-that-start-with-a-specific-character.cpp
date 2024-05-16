#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str[20];
    char c;
    int cnt = 0, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> str[i];
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (str[i][0] == c) {
            cnt++;
            sum += str[i].length();
        }
    }

    cout << cnt << ' ';
    cout << fixed;
    cout.precision(2);
    cout << (double)sum / cnt;

    return 0;
}