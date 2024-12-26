#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int cnt;
    cin >> cnt;
    if (cnt > str.length()) cnt = str.length();

    for (int i = 0; i < cnt; i++) cout << str[str.length() - i - 1];

    return 0;
}