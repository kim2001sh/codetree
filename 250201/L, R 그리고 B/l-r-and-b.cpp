#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char arr[10][10] = {};
    int b[2] = {}, r[2] = {}, l[2] = {};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') {
                b[0] = i;
                b[1] = j;
            }
            else if (arr[i][j] == 'L') {
                l[0] = i;
                l[1] = j;
            }
            else if (arr[i][j] == 'R') {
                r[0] = i;
                r[1] = j;
            }

        }
    }

    if (l[0] != b[0] && l[1] != b[1]) {
        cout << abs(l[0] - b[0]) + abs(l[1] - b[1]) - 1;
        return 0;
    }
    else {
        if (l[0] == b[0]) {
            if (r[0] == b[0] && max(l[1], b[1]) > r[1] && min(l[1], b[1]) < r[1]) {
                cout << abs(l[1] - b[1]) + 1;
            }
            else cout << abs(l[1] - b[1]) - 1;
            return 0;

        }
        else if (l[1] == b[1]) {
            if (r[1] == b[1] && max(l[0], b[0]) > r[0] && min(l[0], b[0]) < r[0]) {
                cout << abs(l[0] - b[0]) + 1;
            }
            else cout << abs(l[0] - b[0]) - 1;
            return 0;

        }

    }
    return 0;
}