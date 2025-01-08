#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, x1, y1, x2, y2, arr[200][200], cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (i % 2 == 0) {
            for (int x = x1 + 100; x < x2 + 100; x++) {
                for (int y = y1 + 100; y < y2 + 100; y++) arr[x][y] = 0;
            }
        }
        else for (int x = x1 + 100; x < x2 + 100; x++) {
            for (int y = y1 + 100; y < y2 + 100; y++) arr[x][y] = 1;
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