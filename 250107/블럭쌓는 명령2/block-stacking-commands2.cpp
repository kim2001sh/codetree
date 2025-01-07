#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[100] = {}, a, b, max;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        for (int j = a - 1; j <= b - 1; j++) {
            arr[j] += 1;
        }
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    cout << max;


    return 0;
}