#include <iostream>

using namespace std;

int main() {
    int y;

    cin >> y;
    cout << ((y % 4 != 0 || y % 400 != 0) ? "false" : "true");

    return 0;
}