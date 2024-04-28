#include <iostream>

using namespace std;

int main() {
    int n[100];
    int index = 0;

    for (int i = 0; i < 100; i++) {
        cin >> n[i];
        if (n[i] == 0)
            break;
        index++;
    }
    for (int i = 0; i < index; i++) {
        if (n[i] % 2)
            cout << n[i] + 3 << ' ';
        else
            cout << n[i] /2 << ' ';
    }

    return 0;
}