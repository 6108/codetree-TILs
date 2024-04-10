#include <iostream>

using namespace std;

int main() {
    int n;

    while(true) {
        cin >> n;
        if (n >= 5) {
            cout << "Vacancy";
            break;
        }
        else if (n == 1)
            cout << "John\n";
        else if (n == 2)
            cout << "Tom\n";
        else if (n == 3)
            cout << "Paul\n";
        else
            cout << "Sam\n";
    }
    
    return 0;
}