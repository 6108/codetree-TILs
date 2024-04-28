#include <iostream>

using namespace std;

int main() {
    int n;
    int m[100];

    cin >> n;
    for (int i = 0 ; i < n; i++) 
        cin >> m[i];
    for (int i = 0; i < n; i++)
        if (m[i] % 2 == 0) cout << m[i] << ' ';
        
    return 0;
}