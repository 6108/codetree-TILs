#include <iostream>

using namespace std;

int main() {
    int n;
    int min = 1000;
    int max = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (500 < n && n < min)
            min = n;
        else if (n < 500 && max < n)
            max = n;
    }
    cout << max << ' ' << min;
    
    return 0;
}