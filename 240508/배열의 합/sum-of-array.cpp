#include <iostream>

using namespace std;

int main() {
    int n[4][4];
    int sum;

    //입력
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) 
            cin >> n[i][j];
    }

    //더하기
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++)
            sum += n[i][j];
        cout << sum << '\n';
    }

    return 0;
}