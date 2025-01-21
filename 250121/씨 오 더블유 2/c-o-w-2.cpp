#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (s[i] == 'C' && s[j] == 'O' && s[k] == 'W') cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}