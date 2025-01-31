#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[1000] = {}, min_val = 1 << 30;
    char arr2[1000] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        arr[i] = arr2[i] - '0';
    }

    int first_max_val = 0, cnt = 0, idx_start, idx_end;

    for (int i = 0; i < n; i++) {
        if (cnt == 0 && arr[i] == 1) cnt++;
        else if (arr[i] == 1) {
            if (cnt > first_max_val) {
                first_max_val = cnt;
                idx_end = i;
                idx_start = i - cnt;
                
            }
            cnt = 1;
        }
        else cnt++;
    }

    arr[(idx_start + idx_end) / 2] = 1;
    cnt = 0;


    for (int i = 0; i < n; i++) {
        if (cnt == 0 && arr[i] == 1) cnt++;
        else if (arr[i] == 1) {
            if (cnt < min_val) {
                min_val = cnt;
                
                
            }
            cnt = 1;
        }
        else cnt++;
    }

    cout << min_val;

    

    return 0;
}