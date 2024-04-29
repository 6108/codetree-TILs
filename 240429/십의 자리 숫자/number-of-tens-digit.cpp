#include <iostream>

using namespace std;

int main() {
    int arr[10] = { };
    int n;

    for (int i = 0; i < 100; i++) {
        cin >> n;
        if (n == 0)
            break;
        arr[n / 10]++;
    }

    for (int i = 1; i <= 9; i++)
        cout << i << " - " << arr[i] << '\n';

    return 0;
}