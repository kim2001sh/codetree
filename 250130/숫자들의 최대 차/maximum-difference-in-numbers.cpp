#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[1000], max_val = 0, min_num = 1 << 30, max_num = -1;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min_num) min_num = arr[i];
        if (arr[i] > max_num) max_num = arr[i];
    }

    for (int i = min_num; i <= max_num; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i && arr[j] <= i + k) cnt++;
        }
        if (cnt > max_val) max_val = cnt;
    }

    cout << max_val;

    return 0;
}