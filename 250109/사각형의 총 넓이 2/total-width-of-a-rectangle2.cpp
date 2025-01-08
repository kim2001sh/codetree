#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[200][200] = {}, x1, x2, y1, y2, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;
        for (int x = 0; x < 200; x++) {
            for (int y = 0; y < 200; y++) {
                if (x >= x1 && x < x2 && y >= y1 && y < y2) arr[x][y] = 1;
            }
        }
    }

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}