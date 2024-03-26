#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int sum, mean;

    cin >> a >> b >> c;
    sum = a + b + c;
    mean = (a + b + c)/3;
    cout << sum << "\n" << mean << "\n" << sum - mean;
    return 0;
}