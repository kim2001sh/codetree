#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            char x, y;
            if (s[i] == '(' && s[j] == ')') cnt++;
        }
    }

    cout << cnt;
    return 0;
}