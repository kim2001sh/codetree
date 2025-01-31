#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[26] = {}, n, cnt = 0;
    char arr2[26] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        arr[i] = arr2[i] - 65;

    }

    while (1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] != i) break;
            if (i == n - 1) {
                cout << cnt;
                return 0;
            }
        }
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == j && arr[j] == i) {
                    cnt++;
                    arr[i] = i;
                    arr[j] = j;
                    flag = true;
                }
            }
        }
        if (flag == false) {
            int cnt2 = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] != i) cnt2++;
            }
            if (cnt2 == 0) {
                cout << cnt;
                return 0;
            }
            cnt += cnt2;
            cnt -= 1;
            cout << cnt;
            return 0;

        }
    }


    return 0;
}