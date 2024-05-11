#include <iostream>
using namespace std;

int main() {
    char a, b;

    cin >> a >> b;
    cout << a + b << ' ';
    cout << (a - b > 0 ? a - b : (a - b) * -1);
    
    return 0;
}