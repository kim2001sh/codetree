#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2] = {}, n, cntline[101] = {}, min_val = 1 << 30;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        for (int j = arr[i][0]; j < arr[i][1]; j++) cntline[j]++;
    }

    for (int i = 0; i < n; i++) { //delete
        for (int j = arr[i][0]; j < arr[i][1]; j++) cntline[j]--;

        int s = -1, e = -1;

        for (int j = 0; j < 101; j++) {
            if (cntline[j] >= 1) {
                s = j;
                break;
            }
        }

        for (int j = 100; j >= 0; j--) {
            if (cntline[j] >= 1) {
                e = j;
                break;
            }
        }

        if (e - s + 1< min_val) min_val = e - s + 1;
        for (int j = arr[i][0]; j < arr[i][1]; j++) cntline[j]++;

    }

    cout << min_val;
    return 0;
}