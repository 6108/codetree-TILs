#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    int m[100] = {};

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> m[i];

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (m[j - 1] < m[j]) {
                int temp = m[j - 1];
                m[j - 1] = m[j];
                m[j] = temp;
            }
        }
    }
    cout << m[0] << ' ' << m[1];

    return 0;
}