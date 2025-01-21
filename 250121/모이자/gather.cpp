#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100] = {}, min = 1 << 30, n, x, sum;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            int y = (j - i);
            if (y < 0) y *= -1;
            sum += arr[j] * (y);
        }
        if (sum < min) min = sum;
    }

    cout << min;
    return 0;
}