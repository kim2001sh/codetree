#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a') cout << char(toupper(str[i]));
        else cout << char(tolower(str[i]));
    }
    return 0;
}