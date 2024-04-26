#include <iostream>

using namespace std;

int main() {
    int n[100];
    int index = 0;

    for (index; index < 100; index++) {
        cin >> n[index];
        if (n[index] == 0)
            break;
    }
    cout << n[index - 1] + n[index - 2] + n[index - 3];

    return 0;
}