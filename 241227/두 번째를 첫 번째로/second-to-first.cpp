#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    char x = str[0];
    char y = str[1];

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == y) str[i] = x;
    }
    cout << str;
    return 0;
}