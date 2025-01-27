#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6], sum = 0, diff = 1 << 30;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++) {
                int x = abs(sum - 2 * (arr[i] + arr[j] + arr[k]));
                if (x < diff) diff = x;
                
            }
        }
    }

    cout << diff;

    return 0;
}