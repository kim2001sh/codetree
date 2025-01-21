#include <iostream>
#include <string>
using namespace std;


int main() {
    // Please write your code here.
    string s;
    int value, max_value = -1;

    cin >> s;

    if (s == "1") {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < s.length(); i++) {
        value = s[0] - '0';
        if (s[i] == '1') s[i] = '0';
        else s[i] = '1';

        for (int j = 1; j < s.length(); j++) {
            value *= 2;
            value += s[j] - '0';
        }
        if (value > max_value) max_value = value;
        
    }

    cout << max_value;
    return 0;
}