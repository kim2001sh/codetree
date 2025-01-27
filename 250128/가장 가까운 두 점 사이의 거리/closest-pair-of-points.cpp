#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, min = 1 << 30;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i][0] - arr[j][0]) * (arr[i][0] - arr[j][0]) + (arr[i][1] - arr[j][1]) * (arr[i][1] - arr[j][1]) < min) {
                min = (arr[i][0] - arr[j][0]) * (arr[i][0] - arr[j][0]) + (arr[i][1] - arr[j][1]) * (arr[i][1] - arr[j][1]);
            }
        }
    }

    cout << min;
    return 0;
}