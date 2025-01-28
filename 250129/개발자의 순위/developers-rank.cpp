#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int k, n, arr[10][20] = {}, cnt = 0;

    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            bool flag = true;
            for (int l = 0; l < k; l++) {
                int x, y;
                for (int m = 0; m < n; m++) {
                    if (arr[l][m] == i) x = m;
                    if (arr[l][m] == j) y = m;
                }
                if (x > y) flag = false;
            }
            if (flag) cnt++;
            
        }
    }

    cout << cnt;
    return 0;
}