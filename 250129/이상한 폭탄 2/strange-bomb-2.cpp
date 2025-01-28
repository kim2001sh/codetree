#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, min_val = -1, arr[100] = {};

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i + j < n && arr[i + j] == arr[i]) {
                if (arr[i] > min_val) min_val = arr[i];

            }
            
        }
    }


    cout << min_val;
    return 0;
}