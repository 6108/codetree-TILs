#include <iostream>

using namespace std;

int main() {
    int n; 

    cin >> n;
    for (int i = n; 0 < i; i--) {
        for (int j = n; 0 < j; j--)
            cout << '(' << i << ',' << j << ") ";
        cout << '\n';
    }

    return 0;
}