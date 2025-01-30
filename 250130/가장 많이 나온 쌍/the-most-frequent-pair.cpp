#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, arr[100][2] = {}, cnt, max_val = 0;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            int tmp;
            tmp = a;
            a = b;
            b = tmp;
        }
        arr[i][0] = a;
        arr[i][1] = b;
    }

    for (int i = 0; i < m; i++) {
        cnt = 0;
        int a, b;
        a = arr[i][0];
        b = arr[i][1];

        for (int j = i; j < m; j++) {
            if (arr[j][0] == a && arr[j][1] == b) cnt++;
        }

        if (cnt > max_val) max_val = cnt;
    }

    cout << max_val;

    return 0;
}