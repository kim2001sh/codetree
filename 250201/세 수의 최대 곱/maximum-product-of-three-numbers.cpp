#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100000] = {}, cnt_positive = 0, cnt_negative = 0, cnt_zero = 0, max_val = -1 * 1 << 30;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) cnt_positive += 1;
        else if (arr[i] < 0) cnt_negative += 1;
        else cnt_zero += 1;
    }
        
    sort(arr, arr + n);

    if (cnt_positive >= 3 || cnt_positive >= 1 && cnt_negative >= 2) {
        if (arr[n - 1] * arr[n - 2] * arr[n - 3] > max_val) max_val = arr[n - 1] * arr[n - 2] * arr[n - 3];
        if (arr[n - 1] * arr[0] * arr[1] > max_val) max_val = arr[n - 1] * arr[0] * arr[1];
        cout << max_val;
        return 0;
    }
    else if (cnt_zero > 0) {
        cout << 0;
        return 0;
    }
    else {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < 0 && arr[i + 1] > 0) {
                if (i >= 2 && arr[i] * arr[i - 1] * arr[i - 2] > max_val) max_val = arr[i] * arr[i - 1] * arr[i - 2];
                if (i < n - 2 && arr[i] * arr[i + 1] * arr[i + 2] > max_val) max_val = arr[i] * arr[i + 1] * arr[i + 2];
                cout << max_val;
                return 0;
            }
        } 
    }


    return 0;
}