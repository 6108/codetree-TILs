#include <iostream>

using namespace std;

int main() {
    char a, b, c;
    int a_t, b_t, c_t;
    int count = 0;

    cin >> a >> a_t >> b >> b_t >> c >> c_t;
    
    if (a == 'Y' && 37 <= a_t)
        count++;
    if (b == 'Y' && 37 <= b_t)
        count++;
    if (c == 'Y' && 37 <= c_t)
        count++;

    cout << (2 <= count ? 'E' : 'N');

    return 0;
}