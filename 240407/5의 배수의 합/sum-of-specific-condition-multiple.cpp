#include <iostream>

using namespace std;

int main() {
    int a, b, temp;
    int sum = 0;
    
    cin >> a >> b;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    for (a; a <= b; a++) {
        if (a % 5 == 0)
            sum += a;
    }
    cout << sum;
    
    return 0;
}