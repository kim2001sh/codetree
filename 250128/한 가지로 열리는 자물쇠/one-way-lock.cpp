#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a, b, c, cnt = 0;

    cin >> n >> a >> b >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (abs(i - a) <= 2 || abs(j - b) <= 2 || abs(k - c) <= 2) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}