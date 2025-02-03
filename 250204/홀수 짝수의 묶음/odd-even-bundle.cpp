#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[1000] = {}, cnt = 0, sum = 0;

    bool even = true;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (even && sum % 2 == 0 || !even && sum % 2 == 1) {
            cnt++;
            sum = 0;
            if (even) even = false;
            else even = true;
        }
        else if (i == n - 1) cnt--;
    }

    cout << min(0, cnt);
    return 0;
}