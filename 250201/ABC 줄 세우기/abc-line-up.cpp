#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[26] = {}, n, cnt = 0, arr3[26] = {};
    char arr2[26] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        arr[i] = arr2[i] - 65;
        arr3[i] = arr[i];

    }

    sort(arr3, arr3 + n);
    

    while (1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr3[i]) break;
            if (i == n - 1) {
                cout << cnt;
                return 0;
            }
        }
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr3[j] && arr[j] == arr3[i]) {
                    cnt++;
                    arr[i] = arr3[i];
                    arr[j] = arr3[j];
                    flag = true;
                }
            }
        }
        if (flag == false) {
            int cnt2 = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] != arr3[i]) cnt2++;
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