#include <iostream>

using namespace std;

int main() {
    int n;
    float sum = 0;
    float score[5];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / n << '\n';
    if (4.0 <= sum / n)
        cout << "Perfect";
    else if (3.0 <= sum / n)
        cout << "Good";
    else    
        cout << "Poor";

    return 0;
}