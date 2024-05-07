#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    int max = 0;

    cin >> a >> b >> c;
    if (a.length() < b.length()) {
        if (b.length() < c.length())
            cout << c.length() - a.length();
        else
            cout << b.length(); - a.length();
    }
    else if (b.length() < c.length()) {
        if (a.length() < c.length())
            cout << c.length() - b.length();
        else
            cout << a.length(); - b.length();
    }
    else {
        if (a.length() < b.length())
            cout << b.length() - c.length();
        else
            cout << a.length(); - c.length();
    }
        
    return 0;
}