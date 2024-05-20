#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isExists = false;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 2) == "ee")
            isExists = true;
    }
    cout << (isExists ? "Yes " : "No ");

    isExists = false;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 2) == "ab")
            isExists = true;
    }
    cout << (isExists ? "Yes" : "No");

    return 0;
}