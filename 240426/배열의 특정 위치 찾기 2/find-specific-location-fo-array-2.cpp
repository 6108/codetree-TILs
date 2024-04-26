#include <iostream>

using namespace std;

int main() {
    int n;
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 1; i <= 10; i++) {
        cin >> n;
        if (i % 2 == 0)
            sum_even += n;
        else
            sum_odd += n;
    }
    cout << (sum_even < sum_odd ? sum_odd - sum_even : sum_even - sum_odd);

    return 0;
}