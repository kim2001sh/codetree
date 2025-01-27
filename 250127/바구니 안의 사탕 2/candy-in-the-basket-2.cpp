#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[101] = {}, sum, max_val = -1;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int candy, location;
        cin >> candy >> location;
        arr[location] += candy;
    }


    k *= 2;
    k += 1;
    if (k >= 101) k = 101;
    for (int i = 0; i < 101 - k + 1; i++) {
        sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;
    return 0;
}