#include <iostream>

using namespace std;

int main() {
    int score;
    int n[20] = {};

    for (int i = 0; i < 100; i++) {
        cin >> score;
        if (score == 0)
            break;
        n[score / 10]++;
    }
    for (int i = 10; 1 <= i; i--)
        cout << i * 10 << " - " << n[i] << '\n';

    return 0;
}