#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    int arr[10], sum_1 = 0, sum_2 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 1) {
            sum_1 += arr[i];
        }
        if (i % 3 == 2) {
            sum_2 += arr[i];
        }
    }

    cout << sum_1 << " " << (double)sum_2 / 3;
    return 0;
}