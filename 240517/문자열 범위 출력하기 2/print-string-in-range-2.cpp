#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str >> n;
    for (int i = 1; i <= n; i++) {
        if (str.length() < i)
            break;
        cout << str[str.length() - i];
    }
    
    return 0;
}