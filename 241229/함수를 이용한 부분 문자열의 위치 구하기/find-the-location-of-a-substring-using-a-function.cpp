#include <iostream>
#include <string>
using namespace std;

int ahrwjr(string s1, string s2) {
    for (int i = 0; i < s1.length() - s2.length() + 1; i++) {
        bool flag = true;
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i + j] != s2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) return i;
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    cin >> s1 >> s2;
    cout << ahrwjr(s1, s2);

    return 0;
}