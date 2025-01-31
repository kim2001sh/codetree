#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[999] = {}, a[1000] = {};

    cin >> n;

    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        bool flag = false;
        a[0] = i;
        int check[1001] = {};
        check[i]++;
        for (int j = 1; j < n; j++) {
            a[j] = arr[j - 1] - a[j - 1];
            

            if (a[j] <= 0 || a[j] > n) break;
            check[a[j]]++;
            if (j == n - 1) flag = true;
        }
        if (flag) {
            for (int k = 1; k <= n; k++) {
                if (check[k] != 1) break;
                if (k == n) {
                    for (int l = 0; l < n; l++) cout << a[l] << " ";
                    return 0;
                }
            }
        }


    }



    return 0;
}