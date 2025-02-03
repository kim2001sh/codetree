#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int n, arr[200000] = {}, min_value = 1 << 30;

    cin >> n;

    for (int i = 0; i < 2 * n; i++) cin >> arr[i];

    sort(arr, arr + 2 * n);

    for (int i = 0; i < n; i++) {
        int x = abs(arr[i] - arr[n + i]);
        if (x < min_value) min_value = x;
    }

    cout << min_value;


    return 0;
}