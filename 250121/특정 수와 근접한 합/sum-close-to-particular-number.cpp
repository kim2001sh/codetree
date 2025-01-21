#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int n, s, sum = 0, arr[100] = {}, min = 1 << 30;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(s - (sum - (arr[i] + arr[j]))) < min) min = abs(s - (sum - (arr[i] + arr[j])));
        }
    }

    cout << min;


    return 0;
}