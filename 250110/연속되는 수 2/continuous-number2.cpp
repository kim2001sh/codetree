#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0, max_cnt = 0, arr[1000], n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] == arr[i - 1]) {
            cnt += 1;
            if (cnt > max_cnt) max_cnt = cnt;
        }
        else cnt = 1;
        
    }

    cout << max_cnt;
    return 0;
}