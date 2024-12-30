#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    bool flag = true;

    if (s1.length() != s2.length()) {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            flag = false;
            break;
        }
    }

    flag ? cout << "Yes" : cout << "No";
    return 0;
}