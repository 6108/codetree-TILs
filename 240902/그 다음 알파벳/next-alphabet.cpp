#include <iostream>
using namespace std;

int main() {
    char c;

    cin >> c;
    cout << (char)((c + 1) < 'z' ? c + 1 : 'a');
    
    return 0;
}