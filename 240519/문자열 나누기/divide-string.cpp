#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        str += to_string(m);
    }

    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
        if (i % 5 == 4)
            cout << '\n';
    }
    
    return 0;
}