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
            if (i + l < n && arr[i] == arr[i + l]) {
                bomb[arr[i]]++;
                break;
            }
            else if (i - l >= 0 && arr[i] == arr[i - l]) {
                bomb[arr[i]]++;
                break;
            }
        }
    }

    int a = 0;


    for (int i = 0; i <= 1000000; i++) {
        if (bomb[i] >= max_val) {
            max_val = bomb[i];
            a = i;
        }
    }

    if (*max_element(bomb, bomb + 1000001) == 0) {
        cout << 0;
        return 0;
    }

    cout << a;
    return 0;
}