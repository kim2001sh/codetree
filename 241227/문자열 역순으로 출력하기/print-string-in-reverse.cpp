#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[4];

    for (int i = 0; i < 4; i++) {
        cin >> str[i];
    }

    for (int i = 3; i >= 0; i--) {
        cout << str[i] << endl;
    }



    return 0;
}