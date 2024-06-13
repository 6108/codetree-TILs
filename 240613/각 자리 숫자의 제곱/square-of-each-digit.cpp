#include <iostream>
using namespace std;

int Fn(int n) {
    if (n < 10)
        return n * n;
    return Fn(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    
    cin >> n;
    cout << Fn(n);

    return 0;
}