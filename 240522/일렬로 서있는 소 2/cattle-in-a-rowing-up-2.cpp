#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k < n; k++) {
                if (arr[i] < arr[j] && arr[j] < arr[k])
                    cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}