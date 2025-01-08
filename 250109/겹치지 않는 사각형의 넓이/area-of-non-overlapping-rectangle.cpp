#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2000][2000], x1, y1, x2, y2, cnt = 0;

    for (int i = 0; i < 2; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1 + 1000; x < x2 + 1000; x++) {
            for (int y = y1 + 1000; y < y2 + 1000; y++) {
                arr[x][y] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1 + 1000; x < x2 + 1000; x++) {
        for (int y = y1 + 1000; y < y2 + 1000; y++) {
            arr[x][y] = 0;
        }
    }

    for (int i = 0; i < 2000; i++) {
        for (int j = 0; j < 2000; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }

    cout << cnt;

    return 0;
}