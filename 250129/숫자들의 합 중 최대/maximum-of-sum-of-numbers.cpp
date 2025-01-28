#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int x, y, max_val = 0, sum;
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        sum = 0;
        string s;
        s = to_string(i);
        for (int j = 0; j < s.length(); j++) {
            sum += s[j] - '0';
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;
    return 0;
}