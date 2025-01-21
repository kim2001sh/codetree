#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, max_sum = 0, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 2; j < n; j++) {
            if (arr[i] + arr[j] > max_sum) max_sum = arr[i] + arr[j];
        }
    }

    cout << max_sum;

    return 0;
}