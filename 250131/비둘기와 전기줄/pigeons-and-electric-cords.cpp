#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, sum_val = 0, arr[100][2] = {};

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];

    for (int i = 1; i <= 10; i++) {
        int x = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j][0] == i && x == -1) x = arr[j][1];
            else if (arr[j][0] == i) {
                if (x != arr[j][1]) {
                    sum_val++;
                    x = arr[j][1];
                }
            }
        }
    }

    cout << sum_val;
    return 0;
}