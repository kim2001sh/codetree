#include <iostream>
using namespace std;

int n, m;

bool Inrange(int p, int q) {
    if (p >= 0 && p < n && q >= 0 && q < m) return true;
    return false;
}

int main() {
    // Please write your code here.
    int arr[100][100] = {}, cnt = 1, i = 0, j = 0, di[4] = {0, 1, 0, -1}, dj[4] = {1, 0, -1, 0}, dir = 0;
    cin >> n >> m;
    arr[i][j] = cnt++;



    while (1) {
        if (Inrange(i + di[dir], j + dj[dir]) && arr[i + di[dir]][j + dj[dir]] == 0) {
            arr[i + di[dir]][j + dj[dir]] = cnt++;
            i += di[dir];
            j += dj[dir];
        }
        else {
            dir = (dir + 1) % 4;
            if (Inrange(i + di[dir], j + dj[dir]) && arr[i + di[dir]][j + dj[dir]] == 0) {
                arr[i + di[dir]][j + dj[dir]] = cnt++;
                i += di[dir];
                j += dj[dir];
            }
            else break;
        }


    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}