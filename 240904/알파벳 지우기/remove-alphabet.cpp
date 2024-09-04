#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    string n_a = "", n_b = "";

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++){
        if ('0' <= a[i] && a[i] <= '9')
            n_a += a[i];
    }
    for (int i = 0; i < b.length(); i++){
        if ('0' <= b[i] && b[i] <= '9')
            n_b += b[i];
    }

    cout << stoi(n_a) + stoi(n_b);

    return 0;
}