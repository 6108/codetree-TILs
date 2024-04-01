#include <iostream>

using namespace std;

int main() {
    int gender, age;

    cin >> gender >> age;
    if (gender)
        cout << (19 <= age ? "WOMAN" : "GIRL");
    else
        cout << (19 <= age ? "MAN" : "BOY");
        
    return 0;
}