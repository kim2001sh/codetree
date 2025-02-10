#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    stack<char> c;
    bool flag = true;

    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        if (x == '(') c.push(x);
        else {
            if (c.size() == 0) {
                flag = false;
                break;
            }
            c.pop();

        }
    }

    if (flag && c.size() == 0) cout << "Yes";
    else cout << "No";
    return 0;
}