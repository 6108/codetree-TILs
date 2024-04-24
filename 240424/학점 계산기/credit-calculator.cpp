#include <iostream>

using namespace std;

int main() {
    int n;
    double average;
    double sum = 0;
    double score[5];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }
    average = sum / n;
    cout << fixed;
    cout.precision(1);
    cout << average << '\n';
    if (4.0 <= average)
        cout << "Perfect";
    else if (3.0 <= average)
        cout << "Good";
    else    
        cout << "Poor";

    return 0;
}