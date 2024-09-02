#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();

    string lr;
    cin >> lr;
    

    for (int i = 0; i < lr.length(); i++) {
        if (lr[i] == 'L') 
            a = a.substr(1, len - 1) + a[0];
        else
            a = a[len - 1] + a.substr(0, len - 1);
    }
    cout << a;

    return 0;
}