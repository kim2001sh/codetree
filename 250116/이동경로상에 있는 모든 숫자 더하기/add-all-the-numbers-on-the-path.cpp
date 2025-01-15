#include <iostream>
#include <string>
using namespace std;

int n;

bool InRange(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n) return true;
    return false;
}

int main() {
    // Please write your code here.
    int sum, t, arr[99][99] = {}, dir_num = 0, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    string s;
    

    cin >> n >> t;
    cin >> s;

    int x = n / 2;
    int y = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    sum = arr[x][y];
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            if (InRange(nx, ny)) {
                x += dx[dir_num];
                y += dy[dir_num];
                sum += arr[x][y];
            }
        }
        else if (s[i] == 'R') dir_num = (dir_num + 1) % 4;
        else dir_num = (dir_num + 3) % 4;
    }

    cout << sum;
    return 0;
}