#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, cnt, max_val = 0;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int k = 1; k < 102; k++) {
        cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] - k == k - arr[i]) cnt++;
                
            }
        }
        if (cnt > max_val) max_val = cnt;
    }
    

    cout << max_val;
    return 0;
}