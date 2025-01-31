#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[1000], min_val = 1 << 30;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i <= 100; i++) { // lower
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < i) {
                sum += abs(arr[j] - i) * abs(arr[j] - i);
            } 
            else if (arr[j] > i + 17) {
                sum += abs(arr[j] - (i + 17)) * abs(arr[j] - (i + 17));
            }
        }
        if (sum < min_val) min_val = sum;
    }

    cout << min_val;
    return 0;
}