#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    char x;
    cin >> x;

    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (str[i][j] == x) {
                cnt++;
                cout << str[i] << endl;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}