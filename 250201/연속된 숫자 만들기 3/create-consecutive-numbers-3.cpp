#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3] = {};
    long long cnt = 0;

    for (int i = 0; i < 3; i++) cin >> arr[i];

    while (1) {
        if (arr[2] - arr[1] == 1 && arr[1] - arr[0] == 1) {
            cnt = 0;
            break;
        }
        
        else if (arr[2] - arr[1] <= arr[1] - arr[0]) {
            cnt = arr[1] - arr[0] - 1;
            break;
        }
        else if (arr[2] - arr[1] > arr[1] - arr[0]) {
            cnt = arr[2] - arr[1] - 1;
            break;
        }
    }

    cout << cnt;

    return 0;
}