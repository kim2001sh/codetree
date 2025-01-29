#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[20] = {}, max_val = 0;
    char arr2[20] = {};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        arr[i] = arr2[i] - '0';

    }

    for (int i = 0; i < n; i++) {
        int min_dis = 1 << 30;
        if (arr[i] == 1) continue;
        arr[i] = 1;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (cnt == 0 && arr[j] == 1) cnt++;
            else if (arr[j] == 1) {
                if (cnt < min_dis) {
                    min_dis = cnt;

                }
                cnt = 1;


            }
            else if (cnt >= 1) cnt++;
        }
        if (min_dis > max_val && min_dis != 1 << 30) max_val = min_dis;
        arr[i] = 0;
    }

    cout << max_val;
    return 0;
}