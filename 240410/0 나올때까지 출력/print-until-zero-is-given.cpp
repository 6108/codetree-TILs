#include <iostream>

using namespace std;

int main() {
    int i;

    while(true) {
        cin >> i;
        if (i == 0)
            break;
        cout << i << '\n';
    }
    
    return 0;
}