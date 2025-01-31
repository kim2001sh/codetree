#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, cnt[101] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        for (int j = arr[i][0]; j <= arr[i][1]; j++) cnt[j]++;
    }

    for (int i = 0; i < 101; i++) {
        if (cnt[i] == n) {
            
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}