#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, price;
    int buy = INT_MAX;
    int sell; 
    int profit = -1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price;
        if (price <= buy) {
            buy = price;
            continue;
        }
        else {
            sell = price;
            if (profit < sell - buy)
                profit = sell - buy;
        }
    }
    cout << (profit != -1 ? profit : 0);

    return 0;
}