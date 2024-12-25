#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4], sum_value;

    for (int i = 0; i < 4; i++) {
        sum_value = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum_value += arr[i][j];
        }

        cout << sum_value << endl;
    }

    

    
    return 0;
}