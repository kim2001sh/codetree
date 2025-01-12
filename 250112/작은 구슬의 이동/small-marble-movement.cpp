#include <iostream>
using namespace std;

int n;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int dir_num(char d) {
    if (d == 'D') return 0;
    if (d == 'R') return 1;
    if (d == 'L') return 2;
    return 3;
}

int main() {
    // Please write your code here.
    int t, r, c, dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0}, arr[50][50] = {}, dir; // 남동서북
    char d;


    cin >> n >> t >> r >> c >> d;
    arr[r - 1][c - 1] = 1;
    dir = dir_num(d);

    while (t--) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 1) {
                    flag = true;
                    if (InRange(i + dx[dir], j + dy[dir])) {
                        arr[i][j] = 0;
                        arr[i + dx[dir]][j + dy[dir]] = 1;

                    }
                    else dir = 3 - dir;
                }
                if (flag) break;
            }
            if (flag) break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
                cout << i + 1 << " " << j + 1;
                break;
            }
        }
    }

    return 0;
}