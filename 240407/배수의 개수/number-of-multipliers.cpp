#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 0;
    int b = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 3 == 0)
            a++;
        if (n % 5 == 0)
            b++;
    }
    cout << a << ' ' << b;

    return 0;
}