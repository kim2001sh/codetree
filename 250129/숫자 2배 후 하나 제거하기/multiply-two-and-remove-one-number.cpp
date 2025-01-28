#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, min_value = 1 << 30;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                if (j == k) continue;
                if (k - j == -1) {
                    if (k + 2 >= n) continue;
                    else sum += abs(arr[k + 2] - arr[k]);
                }
                else {
                    if (k + 1 >= n) continue;
                    else sum += abs(arr[k + 1] - arr[k]);
                }
            }
            if (sum < min_value) min_value = sum;
        }
        arr[i] /= 2;
    }

    cout << min_value;
    return 0;
}