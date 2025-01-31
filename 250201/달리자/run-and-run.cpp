#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a[100] = {}, b[100] = {}, sum_val = 0;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        sum_val += a[i] - b[i];
        a[i + 1] += a[i] - b[i];
    }

    cout << sum_val;
    return 0;
}