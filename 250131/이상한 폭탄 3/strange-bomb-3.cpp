#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[100] = {}, bomb[1000001] = {}, max_val = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) { // 탐색
        for (int l = 1; l <= k; l++) {
            if (i + k < 100 && arr[i] == arr[i + k]) {
                bomb[arr[i]]++;
                break;
            }
            else if (i - k >= 0 && arr[i] == arr[i - k]) {
                bomb[arr[i]]++;
                break;
            }
        }
    }

    cout << max_element(bomb, bomb + 1000001) - bomb;
    return 0;
}