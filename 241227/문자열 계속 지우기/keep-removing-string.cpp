#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, str2;
    cin >> str >> str2;
    

    while (1) {
        bool a = false;
        if (str.length() < str2.length()) break;
        for (int i = 0; i < str.length() - str2.length() + 1; i++) {
            if (str.substr(i, str2.length()) == str2) {
                str.erase(i, str2.length());
                a = true;
                break;
            }
        }
        if (!a) break;
    }

    cout << str;
    return 0;
}