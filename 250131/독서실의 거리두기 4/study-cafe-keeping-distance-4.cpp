#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, max_val = 0;
    char arr2[100] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        arr[i] = arr2[i] - '0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == 1 || arr[j] == 1) continue;
            arr[i] = 1;
            arr[j] = 1;
            int cnt = 0;
            int min_dis = 1 << 30;
            for (int k = 0; k < n; k++) {
                if (cnt == 0 && arr[k] == 1) cnt++;
                else if (arr[k] == 1) {
                    if (cnt < min_dis) min_dis = cnt;
                    cnt = 1;
                }
                else if (cnt != 0 && arr[k] == 0) cnt++;
            }
            if (min_dis > max_val) max_val = min_dis;
            arr[i] = 0;
            arr[j] = 0;

        }
    }

    cout << max_val;
    return 0;
}