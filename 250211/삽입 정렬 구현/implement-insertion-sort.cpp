#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, arr[100] = {};

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i < n; i++) {
        int j = i - 1, value = arr[i];
        while (j >= 0 && value < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            arr[j + 1] = value;

        }
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}