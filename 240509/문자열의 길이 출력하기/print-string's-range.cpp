#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[2];

    cin >> str[0] >> str[1];
    cout << str[0].length() + str[1].length();

    return 0;
}