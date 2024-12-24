#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum_odd = 0, sum_even = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (i % 2 == 0) {
            sum_odd += arr[i];
        }
        else sum_even += arr[i];
    }

    int sum_sub = sum_odd - sum_even;
    if (sum_sub < 0 ) sum_sub *= -1;

    cout << sum_sub;
    return 0;
}