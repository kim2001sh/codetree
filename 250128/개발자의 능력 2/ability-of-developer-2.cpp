#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6] = {}, sum1, sum2, sum3, max_val;

    for (int i = 0; i < 6; i++) cin >> arr[i];
    sort(arr, arr + 6);

    sum1 = arr[0] + arr[5];
    sum2 = arr[1] + arr[4];
    sum3 = arr[2] + arr[3];

    max_val = abs(sum1 - sum2);
    if (abs(sum1 - sum3) > max_val) max_val = abs(sum1 - sum3);
    if (abs(sum2 - sum3) > max_val) max_val = abs(sum2 - sum3);

    cout << max_val;

    return 0;
}