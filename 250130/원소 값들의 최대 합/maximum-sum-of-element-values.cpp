#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, arr[100] = {}, max_val = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        int k = m;
        int sum = 0;
        int x = i;
        while (k--) {
            sum += arr[x];
            x = arr[x] - 1;
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;


    return 0;
}