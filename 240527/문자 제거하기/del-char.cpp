#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    int length = str.length();

    for (int i = 0; i < length; i++) {
        cin >> n;
        if (str.length() < n)
            str.erase(str.length() - 1, 1);
        else
            str.erase(n, 1);
        cout << str << '\n';
    }
    return 0;
}