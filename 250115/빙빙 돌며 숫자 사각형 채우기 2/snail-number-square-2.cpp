#include <iostream>
using namespace std;

int n, m;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m) return true;
    return false;
}

int main() {
    // Please write your code here.
    int x = 0, y = 0, cnt = 1, dir_num = 0, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, arr[100][100] = {};

    cin >> n >> m;

    for (int i = 0; i < n * m; i++) {
        arr[x][y] = cnt++;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4;
        }

        x += dx[dir_num];
        y += dy[dir_num];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}