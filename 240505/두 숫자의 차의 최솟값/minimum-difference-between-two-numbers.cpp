#include <iostream> 
using namespace std;

int main() {
    int n, diff;
    int a[100];
    int b[100];
    int max = -100;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        diff = -100;
        for (int j = i + 1; j < n; j++) {
            if (diff < a[i] - a[j])
                diff = a[i] - a[j];
        }
        b[i] = diff;
    }
    for (int i = 0; i < n; i++) {
        if (max < b[i])
            max = b[i];
    }
    cout << max * -1;
    
    return 0;
}