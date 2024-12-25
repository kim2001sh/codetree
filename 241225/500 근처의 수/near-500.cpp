#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], min = 1001, max = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] < 500 && arr[i] > max) max = arr[i];
        if (arr[i] > 500 && arr[i] < min) min = arr[i];
    }

    cout << max << " " << min;


    return 0;
}