#include <iostream>
using namespace std;

int main() {
    float ft = 30.48;
    float n;

    cin >> n;
    cout << fixed;
    cout.precision(1);
    cout << n * ft;
    return 0;
}