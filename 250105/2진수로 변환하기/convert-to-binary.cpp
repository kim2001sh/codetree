#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0, arr[20], n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (1) {
        if (n == 1) {
            arr[cnt++] = 1;
            break;
        }
        arr[cnt++] = n % 2;
        n /= 2;
    }

    

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}