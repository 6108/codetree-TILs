#include <iostream>

using namespace std;

int main() {
    double n[2][4];
    double sum;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) 
            cin >> n[i][j];
    }
    
    cout << fixed;
    cout.precision(1);
    
    for (int i = 0; i < 2; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++)
            sum += n[i][j];
        cout << sum / 4 << ' ';
    }
    cout << '\n';

    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 2; j++)
            sum += n[j][i];
        cout << sum / 2 << ' ';
    }
    cout << '\n';

    sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++)
            sum += n[i][j];
    }
    cout << sum / 8;

    return 0;
}