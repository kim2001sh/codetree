#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, min_value = 1 << 30, arr[100][2] = {};

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];

    for (int x = 0; x <= 102; x += 2) {
        for (int y = 0; y <= 102; y += 2) {
            int quadrant[4] = {};
            for (int i = 0; i < n; i++) {
                if (arr[i][0] > x && arr[i][1] > y) quadrant[0]++;
                else if (arr[i][0] < x && arr[i][1] > y) quadrant[1]++;
                else if (arr[i][0] < x && arr[i][1] < y) quadrant[2]++;
                else quadrant[3]++;
            }
            int m = 0;
            for (int i = 0; i < 4; i++) {
                if (m < quadrant[i]) m = quadrant[i];
            }
            if (m < min_value) min_value = m;
        }
    }

    cout << min_value;
    return 0;
}