#include <iostream>

using namespace std;

int n;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int main() {
    // Please write your code here.
    int start, dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1}, dir_num, cnt = 0; //남서북동
    char arr[1000][1000] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> start;
    dir_num = (start - 1) / n;

    int x, y;
    if (start <= n) {
        x = 0;
        y = start - 1;
    }
    else if (start > n && start <= 2 * n) {
        x = start - n - 1;
        y = n - 1;
    }
    else if (start > n && start <= 3 * n) {
        x = n - 1;
        y = n - (start - 2 * n); 
    }
    else {
        x = n - (start - 3 * n);
        y = 0;
    }

    while (1) {
        cnt++;
        if (arr[x][y] == '/' && (dir_num == 3 || dir_num == 1)) dir_num = (dir_num + 3) % 4;
        else if (arr[x][y] == '/') dir_num = (dir_num + 1) % 4;
        else if (arr[x][y] == '\\' && (dir_num == 3 || dir_num == 1)) dir_num = (dir_num + 1) % 4;
        else dir_num = (dir_num + 3) % 4;

        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if (InRange(nx, ny)) {
            x = nx;
            y = ny;
        }
        else break;
    }

    cout << cnt;


    return 0; 
}