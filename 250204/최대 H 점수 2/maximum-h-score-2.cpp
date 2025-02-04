#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, l, arr[100] = {}, max_val = -1;

    cin >> n >> l;

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 100; i >= 1; i--) { //score
        int cnt = 0;
        sort(arr, arr + n);
        for (int j = n - 1; j >= 0; j--) {
            if (l == 0) break;
            if (arr[j] == i - 1) {
                cnt++;
                arr[j] += 1;
            }
            if (cnt == l) break;
        }
        int cnt2 = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i) cnt2++;
        }
        if (cnt2 >= i) {
            max_val = i;
            break;
        }
        for (int j = 0; j < n; j++) {
            if (cnt == 0) break;
            if (arr[j] == n - 2) {
                cnt--;
                arr[j] += 1;
            }
        }
        sort(arr, arr + n);
    }

    cout << max_val;
    return 0;
}