#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int ab, ba;

    cin >> a >> b;
    ab = stoi(a + b);
    ba = stoi(b + a);
    cout << ab + ba;
    
    return 0;
}