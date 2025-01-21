#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < s.length() - 2; i++) {
        if (!(s[i] == '(' && s[i + 1] == '(')) continue;
        for (int j = i + 2; j < s.length() - 1; j++) {
            if (!(s[j] == ')' && s[j + 1] == ')')) continue;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}