#include <iostream>
using namespace std;

int n;

int main() {
    // Please write your code here.
    int arr[20][20], max_value = 0, value;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            value = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            if (value > max_value) max_value = value;
        }

    }

    cout << max_value;
    return 0;
}