#include <iostream>

using namespace std;

int main() {
    int n;
    int index = 0;
    int m[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[index];
        if (m[index] % 2 == 0)
            index++;
    }
    for (int i = index - 1; 0 <= i; i--)
        cout << m[i] << ' ';

    return 0;
}