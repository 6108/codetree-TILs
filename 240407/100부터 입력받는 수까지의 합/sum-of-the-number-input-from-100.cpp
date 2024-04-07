#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;
    for (n; n <= 100; n++)
        sum += n;
    cout << sum;
    
    return 0;
}