#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[1000], cnt = 0, max_cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] > arr[i - 1]) {
            cnt++;
            if (cnt > max_cnt) max_cnt = cnt;
        }
        else cnt = 1;
    }

    cout << max_cnt;
    return 0;
}