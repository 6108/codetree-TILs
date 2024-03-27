#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string rank;

    cin >> score;
    rank = score == 100 ? "pass" : "failure";
    cout << rank;
    
    return 0;
}