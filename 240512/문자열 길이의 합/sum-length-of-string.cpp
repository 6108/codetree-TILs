#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int sum = 0, cnt = 0;
    string str[10];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        sum += str[i].length();
        if (str[i][0] == 'a')
            cnt++;
    }
    cout << sum << ' ' << cnt;
    
    return 0;
}