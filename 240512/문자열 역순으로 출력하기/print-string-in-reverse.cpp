#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[4];

    for (int i = 0; i < 4; i++)
        cin >> str[i];
    for (int i = 0; i < 4; i++)
        cout << str[3 - i] << '\n';
        
    return 0;
}