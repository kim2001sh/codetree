#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2, arr[2000][2000];

    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1 + 1000; x < x2 + 1000; x++) {
        for (int y = y1 + 1000; y < y2 + 1000; y++) {
            arr[x][y] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1 + 1000; x < x2 + 1000; x++) {
        for (int y = y1 + 1000; y < y2 + 1000; y++) {
            arr[x][y] = 0;
        }
    }

    x1 = 2001;
    y1 = 2001;
    x2 = -1;
    y2 = -1;


    for (int i = 0; i < 2000; i++) {
        for (int j = 0; j < 2000; j++) {
            if (arr[i][j] == 1) {
                if (i < x1) x1 = i;
                if (i > x2) x2 = i;
                if (j < y1) y1 = j;
                if (j > y2) y2 = j;
            }
        }
    }


    if (x1 == 2001) cout << 0;
    else cout << (x2 + 1 - x1) * (y2 + 1 - y1);
    return 0;
}