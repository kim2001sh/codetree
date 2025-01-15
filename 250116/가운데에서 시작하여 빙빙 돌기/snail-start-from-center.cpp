#include <iostream>
using namespace std;

int n;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int main() {
    // Please write your code here.
    int arr[100][100] = {}, x, y, cnt = 1, dir_num = 0, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    cin >> n;

    x = n / 2;
    y = n / 2;

    for (int i = 0; i < n * n; i++) {
        arr[x][y] = cnt++;
        dir_num = (dir_num + 1) % 4;
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if (InRange(nx, ny) && arr[nx][ny] == 0) ;
        else dir_num = (dir_num + 3) % 4;
        x += dx[dir_num];
        y += dy[dir_num];

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}