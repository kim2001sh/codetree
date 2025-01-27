#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[10000] = {}, max_val = -1, sum;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int location;
        char c;

        cin >> location >> c;
        if (c == 'G') arr[location - 1] = 1;
        else arr[location - 1] = 2;
    }

    for (int i = 0; i < 10000 - k + 1; i++) {
        sum = 0;
        for (int j = 0; j < k + 1; j++) {
            if (i + j >= 10000) break;
            sum += arr[i + j];
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;
    return 0;
}