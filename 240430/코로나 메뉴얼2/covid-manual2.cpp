#include <iostream>

using namespace std;

int main() {
    char c;
    int n;
    int arr[5] = {};

    for (int i = 0; i < 3; i++) {
        cin >> c >> n;
        if (c == 'Y' && 37 <= n)
            arr[0]++;
        else if (c == 'N' && 37 <= n)
            arr[1]++;
        else if (c == 'Y' && n < 37)
            arr[2]++;
        else
            arr[3]++;
    }
    for (int i = 0; i < 4; i++)
        cout << arr[i] << ' ';
    if (2 <= arr[0])
        cout << 'E';
        
    return 0;
}