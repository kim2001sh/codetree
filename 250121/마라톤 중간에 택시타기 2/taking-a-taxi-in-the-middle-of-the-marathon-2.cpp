#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, dis_min = 1 << 30, dis, x, y;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;

    }

    for (int i = 1; i < n - 1; i++) {
        dis = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            else if (j - 1 == i) {
                dis += arr[j][0] - arr[j - 2][0] >= 0 ? arr[j][0] - arr[j - 2][0] : -1 * (arr[j][0] - arr[j - 2][0]);
                dis += arr[j][1] - arr[j - 2][1] >= 0 ? arr[j][1] - arr[j - 2][1] : -1 * (arr[j][1] - arr[j - 2][1]);
            }
            else if (i - 1 == j) ;
            else {
                dis += arr[j][0] - arr[j - 1][0] >= 0 ? arr[j][0] - arr[j - 1][0] : -1 * (arr[j][0] - arr[j - 1][0]);
                dis += arr[j][1] - arr[j - 1][1] >= 0 ? arr[j][1] - arr[j - 1][1] : -1 * (arr[j][1] - arr[j - 1][1]);
            }
            
        }
        if (dis < dis_min) dis_min = dis;
    }

    cout << dis_min;

    return 0;
}