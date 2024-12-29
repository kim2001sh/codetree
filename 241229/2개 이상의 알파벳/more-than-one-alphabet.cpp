#include <iostream>
#include <string>
using namespace std;
bool vkseks(string s) {
    char x = s[1];
    if (s.length() == 1) return false;
    for (int i = 1; i < s.length(); i++) {
        if (x != s[i]) return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    vkseks(s) ? cout << "Yes" : cout << "No";
    
    return 0;
}