#include <iostream>
using namespace std;

void PrintN(int n) {
    if (n <= 0)
        return;
    cout << n << ' ';
    PrintN(n - 1);
    cout << n << ' ';
}

int main() {
    int n;

    cin >> n;
    PrintN(n);

    return 0;
}