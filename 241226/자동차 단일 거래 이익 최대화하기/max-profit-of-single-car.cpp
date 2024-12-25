#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[1000], today_val, future_val, max_val = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        today_val = arr[i];
        future_val = 0;
        for (int j = i + 1; j < n; j++) {
            if (future_val < arr[j]) future_val = arr[j];
            

        }
        if ((future_val - today_val) > max_val) max_val = future_val - today_val;
    }

    cout << max_val;

    return 0;
}