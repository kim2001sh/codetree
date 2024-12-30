#include <iostream>
using namespace std;

int rhdqotn(int arr[], int n, int max) {
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (max % arr[i] != 0) {
            flag=false;
            break;

        }
    }
    if (flag) return max;
    return rhdqotn(arr, n, max+1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10], max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    cout << rhdqotn(arr, n, max);
    
    return 0;
}