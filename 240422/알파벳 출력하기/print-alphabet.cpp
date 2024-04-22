#include <iostream>

using namespace std;

int main() {
    int n;
    char c = 64;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            c++;
            cout << c;
            if (c == 'Z')
                c = 64;
        }  
        cout << '\n';
    }

    return 0;
}