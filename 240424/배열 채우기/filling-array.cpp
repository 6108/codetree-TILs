#include <iostream>

using namespace std;

int main() {
    int n[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n[i];
        if (n[i] == 0)
            break;
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
        cout << n[cnt - i - 1] << ' ';

    return 0;
}