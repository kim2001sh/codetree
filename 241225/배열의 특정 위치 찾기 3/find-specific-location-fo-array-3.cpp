#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], index, i = 0, sum_value;

    while (1) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        i++; 
    }

    for (int j = 1; j < 4; j++) {
        sum_value += arr[i-j];
    }

    cout << sum_value;


    return 0;
}