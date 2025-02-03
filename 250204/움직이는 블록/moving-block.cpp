#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, sum = 0, arr[10000] = {}, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sum = sum / n;

    for (int i = 0; i < n; i++) cnt += abs(arr[i] - sum);

    cout << cnt / 2;

    return 0;
}