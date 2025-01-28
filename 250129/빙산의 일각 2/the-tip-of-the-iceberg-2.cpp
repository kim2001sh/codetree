#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100], max_h = 0, max_val = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max_h < arr[i]) max_h = arr[i];
    }

    for (int i = 0; i <= max_h; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (cnt == 0 && arr[j] - i > 0 || 
            cnt != 0 && arr[j - 1] - i <= 0 && arr[j] - i > 0) cnt++;
        }
        if (cnt > max_val) max_val = cnt;
    }

    cout << max_val;

    return 0;
}