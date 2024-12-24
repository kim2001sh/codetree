#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i == 2 or i == 4 or i == 9) {
            sum += arr[i];
        }
    }
    cout << sum;


    return 0;
}