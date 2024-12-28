#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    int n;
    cin >> n;
    int arr[n], cnt = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 7 == 0) {
            cnt++;
            sum += arr[i];
        }
    }

    cout << cnt << " " << sum << " " << (float)sum / cnt;


    return 0;
}