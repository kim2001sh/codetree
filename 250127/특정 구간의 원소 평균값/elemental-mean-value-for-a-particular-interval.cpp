#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++) { //구간 길이
        for (int j = 0; j < n - i + 1; j++) { //start
            int sum = 0;
            for (int k = 0; k < i; k++) {
                sum += arr[j + k];
            }
            for (int k = 0; k < i; k++) {
                if (sum == arr[j + k] * i) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt; 

    return 0;
}