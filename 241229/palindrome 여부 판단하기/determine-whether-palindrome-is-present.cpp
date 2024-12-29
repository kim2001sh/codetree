#include <iostream>
#include <string>
using namespace std;
bool pal(string s) {
    int x = s.length() / 2;
    for (int i = 0; i <= x; i++) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    pal(s) ? cout << "Yes" : cout << "No";

    return 0;
}