#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    str = str.substr(0, 1) + str.substr(2, str.length() - 4) + str[str.length() - 1];
    cout << str;
    return 0;
}