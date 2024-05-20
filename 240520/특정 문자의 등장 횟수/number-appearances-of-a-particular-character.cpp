#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int eeCnt = 0, abCnt = 0;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 2) == "ee")
            eeCnt++;
        if (str.substr(i, 2) == "eb")
            abCnt++;
    }
    cout << eeCnt << ' ' << abCnt;

    return 0;
}