#include <iostream>
using namespace std;

int n;

bool Inrange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int main() {
    // Please write your code here.
    int m, r, c, arr[100][100] = {}, dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, cnt;
    cin >> n >> m; 

    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r - 1][c - 1] = 1;
        cnt = 0;

        for (int j = 0; j < 4; j++) {
            int nx = r - 1 + dx[j];
            int ny = c - 1 + dy[j];
            if (Inrange(nx, ny) && arr[nx][ny] == 1) cnt++;
        }
        if (cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}