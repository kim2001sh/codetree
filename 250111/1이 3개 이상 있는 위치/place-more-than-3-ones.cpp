#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int main() {
    // Please write your code here.
    int n, arr[100][100], cnt, total_cnt = 0, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
                cnt = 0;
                for (int k = 0; k < 4; k++) {
                    if (InRange(i + dy[k], j + dx[k], n) && arr[i + dy[k]][j + dx[k]] == 1) cnt++;

                }
                if (cnt >= 3) total_cnt++;
        }
    }

    cout << total_cnt;
    return 0;
}