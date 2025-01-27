#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, b, arr[1000] = {}, cnt_max = 0;

    cin >> n >> b;

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        arr[i] /= 2;
        int cnt = 0, bb = b;
        for (int j = 0; j < n; j++) {
            if (bb - arr[j] >= 0) {
                cnt++;
                bb -= arr[j];
            }
            else break;
        }
        if (cnt > cnt_max) cnt_max = cnt;
        arr[i] *= 2;

    }

    cout << cnt_max;
    return 0;
}