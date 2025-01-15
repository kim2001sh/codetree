#include <iostream>
using namespace std;

int n, m;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m) return true;
    return false;
}

int main() {
    // Please write your code here.
    int cnt = 65, dir = 0, dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, x = 0, y = 0;
    char arr[100][100] = {};

    cin >> n >> m;

    for (int i = 0; i < n * m; i++) {
        if (cnt == 91) cnt = 65;
        arr[x][y] = cnt++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (InRange(nx, ny) && arr[nx][ny] == '\0') ;
        else {
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}