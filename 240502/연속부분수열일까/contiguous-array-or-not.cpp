#include <iostream>

using namespace std;

int main() {
    int a, b;
    int a_arr[100];
    int b_arr[100];
    bool isExist = false;

    //입력
    cin >> a >> b;
    for (int i = 0; i < a; i++)
        cin >> a_arr[i];
    for (int i = 0; i < b; i++)
        cin >> b_arr[i];
    
    //수열있는지 체크
    for (int i = 0; i < a; i++) {
        if (a_arr[i] == b_arr[0]) {
            isExist = true;
            for (int j = 0; j < b; j++) {
                if (a_arr[i + j] != b_arr[j])
                    isExist = false;
            }
            if (isExist)
                break;
        }
    }
    cout << (isExist ? "Yes" : "No");
    
    return 0;
}