#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, t, arr[1000], cnt = 0, max_cnt = 0;

    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > t) {
            cnt++;
            if (cnt > max_cnt) max_cnt = cnt;
        }
        else cnt = 0;
    }

    cout << max_cnt;
    return 0;
}