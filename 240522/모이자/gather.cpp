#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int min = INT_MAX;
    int sum = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j] * abs(i - j); 
        }
        if (sum < min)
            min = sum;
    }
    cout << min;

    return 0;
}