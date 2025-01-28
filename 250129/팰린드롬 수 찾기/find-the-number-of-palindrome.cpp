#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int x, y, cnt = 0;

    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        string s;
        s = to_string(i);
        bool flag = true;
        for (int j = 0; j < s.length() / 2; j++) {
            if (s[j] != s[s.length() - 1 - j]) {
                flag = false;
                break;
            }
        }
        if (flag) cnt++;
    }

    cout << cnt;
    return 0;
}