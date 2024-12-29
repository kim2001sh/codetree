#include <iostream>
using namespace std;

void abs(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] *= -1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    abs(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}