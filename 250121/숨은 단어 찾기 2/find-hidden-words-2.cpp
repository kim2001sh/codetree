#include <iostream>

int n, m;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m) return true;
    return false; 
}


using namespace std;

int main() {
    // Please write your code here.
    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[8] = {1, 1, 0, -1, -1, -1, 0, 1}, cnt = 0;
    char arr[50][50] = {};
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'L') {
                for (int k = 0; k < 8; k++) {
                    if (InRange(i + dx[k], j + dy[k]) && arr[i + dx[k]][j + dy[k]] == 'E') {
                        if (InRange(i + 2 * dx[k], j + 2 * dy[k]) && arr[i + 2 * dx[k]][j + 2 * dy[k]] == 'E') cnt++;
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}