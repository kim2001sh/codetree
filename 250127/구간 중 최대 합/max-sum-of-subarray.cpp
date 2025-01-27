#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[100], max_val = 0, sum;

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - k + 1; i++) {
        sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;
    return 0;
}