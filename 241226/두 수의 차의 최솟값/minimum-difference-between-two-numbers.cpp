#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10], min_sub = 100, sub;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            sub = arr[i] - arr[j];
            if (sub < 0) sub *= -1;
            if (sub < min_sub) min_sub = sub;
        }
    }

    cout << min_sub;
    return 0;
}