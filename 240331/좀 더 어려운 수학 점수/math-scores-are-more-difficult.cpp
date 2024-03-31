#include <iostream>

using namespace std;

int main() {
    int a_m, a_e, b_m, b_e;

    cin >> a_m >> a_e >> b_m >> b_e;
    if (a_m > b_m)
        cout << "A";
    else if (a_m < b_m)
        cout << "B";
    else
        cout << (a_e > b_e ? "A" : "B");

    return 0;
}