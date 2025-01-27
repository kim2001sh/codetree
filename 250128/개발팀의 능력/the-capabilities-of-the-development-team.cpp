#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[5], sum1, sum2, diff, min_val = 1 << 30;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
   
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = k + 1; l < 5; l++) {
                    if (i == k || i == l || j == k || j == l) continue;
                    for (int m = 0; m < 5; m++) {
                        if (m == i || m == j || m == k || m == l) continue;
                    
                        sum1 = arr[i] + arr[j];
                        sum2 = arr[k] + arr[l];
                        if (sum1 == sum2 || sum1 == arr[m] || sum2 == arr[m]) continue;
                        
                        diff = max(abs(sum1 - sum2), abs(sum1 - arr[m]));
                        diff = max(diff, abs(sum2 - arr[m]));
                        if (diff < min_val) min_val = diff;
                    }

                }
            }
        }
    }

    if (min_val == 1 << 30) cout << -1;
    else cout << min_val;
    return 0;
}