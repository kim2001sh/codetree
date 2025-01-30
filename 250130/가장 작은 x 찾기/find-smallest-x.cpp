#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[10][2] = {}, prod = 2;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];

    for (int i = 1;; i++) {
        int x = i;
        bool flag = true;
        for (int j = 0; j < n; j++) {
            x *= prod;
            if (!(x >= arr[j][0] && arr[j][1])) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i;
            return 0;
        }
    }
    return 0;
}