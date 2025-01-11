#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1}, x = 0, y = 0;
    char qkd;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> qkd >> k;
        if (qkd == 'E') {
            for (int j = 0; j < k; j++) {
                x += dx[0];
                y += dy[0];
            }
        }
        else if (qkd == 'S') {
            for (int j = 0; j < k; j++) {
                x += dx[1];
                y += dy[1];
            }
        }   
        else if (qkd == 'W') {
            for (int j = 0; j < k; j++) {
                x += dx[2];
                y += dy[2];
            }
        }
        else {
            for (int j = 0; j < k; j++) {
                x += dx[3];
                y += dy[3];
            }

        }
    }

    cout << x << " " << y;
    return 0;
}