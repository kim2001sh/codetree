#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, sorted_arr[100] = {}, val;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr + n);

    bool flag = false;

    for (int i = 1; i < n; i++) {
        if (flag) break;
        if (sorted_arr[i] != sorted_arr[0]) {
            if (i + 1 < n && sorted_arr[i + 1] == sorted_arr[i]) {
                cout << -1;
                return 0;
            }
            flag = true;

            val = sorted_arr[i];
            
        }
    }

    if (flag) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                cout << i + 1;
                return 0;
            }
        }
    }
    else {
        cout << -1;
        return 0;
    }

    return 0;
}