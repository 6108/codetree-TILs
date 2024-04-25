#include <iostream>

using namespace std;

int main() {
    int n, sum, score;
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> score;
            sum += score;
        }    
        if (60 <= (double)sum / 4) {
            cout << "pass\n";
            cnt++;
        }
        else
            cout << "fail\n";
    }
    cout << cnt;

    return 0;
}