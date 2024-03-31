#include <iostream>

using namespace std;

int main() {
    int mid_test, final_test;

    cin >> mid_test >> final_test;
    if (mid_test >= 95) {
        if (final_test >= 95)
            cout << 200000;
        else if (final_test >= 90)
            cout << 150000;
        else 
            cout << 100000;
    }
    else if (mid_test >= 90) {
        if (final_test >= 95)
            cout << 150000;
        else if (final_test >= 90)
            cout << 10000;
        else 
            cout << 50000;
    }
    else
        cout << 0;

    return 0;
}