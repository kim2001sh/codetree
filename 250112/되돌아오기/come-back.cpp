#include <iostream>
using namespace std;

int dir_nums(char dir) {
    if (dir == 'E') return 0;
    if (dir == 'S') return 1;
    if (dir == 'W') return 2;
    return 3;
}

int main() {
    // Please write your code here.
    int n, arr[2200][2200] = {}, dir_num, i = 1100, j = 1100, cnt = 1, far, di[4] = {0, 1, 0, -1}, dj[4] = {1, 0, -1, 0};
    char dir;
    cin >> n;

    arr[i][j] = cnt++;
    
    while (n--) {
        cin >> dir >> far;
        
        dir_num = dir_nums(dir);
        for (int k = 0; k < far; k++) {
            if (arr[i + di[dir_num]][j + dj[dir_num]] == 1) {
            cout << cnt - 1;
            return 0;
        }
        i += di[dir_num];
        j += dj[dir_num];
        cnt++;
        }
        

    }

    cout << -1;

    return 0;
}