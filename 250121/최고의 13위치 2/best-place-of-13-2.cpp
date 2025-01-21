#include <iostream>


using namespace std;

int main() {
    // Please write your code here.
    int n, max_value = 0, arr[20][20], x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n - 2; l++) {
                    if (i == k && j == l) continue;

                    x = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[k][l] + arr[k][l + 1] + arr[k][l + 2];
                    if (x > max_value) max_value = x;

                }
            }
        }
    }

    cout << max_value;
    return 0;
}

