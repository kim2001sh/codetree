#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, max_val = 0, cnt1, cnt2;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];


    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i][0] - arr[i][1] + 3) % 3 == 1) cnt1++;
        else if ((arr[i][0] - arr[i][1] + 3) % 3 == 2) cnt2++;
    }

    max_val = max(cnt1, cnt2);

    cout << max_val;

    return 0;
}