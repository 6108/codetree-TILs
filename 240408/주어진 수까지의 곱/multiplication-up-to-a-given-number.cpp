#include <iostream>

using namespace std;

int main() {
    int a, b;
    int prod = 1;

    cin >> a >> b;
    for (a; a <= b; a++)
        prod *= a;
    cout << prod;

    return 0;
}