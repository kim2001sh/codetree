#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[100] = {};

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i <= 100; i++) { //최댓값
        bool flag = false;
        
        for (int j = 0; j < n; j++) {
            bool flag2 = false;
            if (arr[j] > i) break;
            else if (j == n - 1 && arr[j] <= i) {
                cout << i;
                return 0;
            }
            for (int l = 1; l <= k; l++) {
                if (arr[j + l] <= i) {
                    j += l - 1;
                    flag2 = true;
                    break;
                }
            }
            if (flag2) continue;
            else break;
        }
        
    }


    return 0;
}