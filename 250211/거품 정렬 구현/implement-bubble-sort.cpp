#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100];

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}