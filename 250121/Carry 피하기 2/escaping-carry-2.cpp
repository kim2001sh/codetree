#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, max_sum = -1;
    bool carry;
    string s[20], x, y;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i].length() == 1) s[i] = "0000" + s[i];
        else if (s[i].length() == 2) s[i] = "000" + s[i];
        else if (s[i].length() == 3) s[i] = "00" + s[i];
        else if (s[i].length() == 4) s[i] = "0" + s[i];
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                carry = false;
                for (int l = 0; l < 5; l++) {
                    if (s[i][l] + s[j][l] + s[k][l] - 3 * '0' >= 10) carry = true;
                }
                if (carry) continue;
                if (stoi(s[i]) + stoi(s[j]) + stoi(s[k]) > max_sum) max_sum = stoi(s[i]) + stoi(s[j]) + stoi(s[k]);
            }
        }
    }

    cout << max_sum;
    return 0;
}