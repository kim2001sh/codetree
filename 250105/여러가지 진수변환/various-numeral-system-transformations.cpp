#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, b, cnt = 0, arr[10];
    cin >> n >> b;

    while (1) {
        if (n < b) {
            arr[cnt] = n;
            break;
        }
        arr[cnt++] = n % b;
        n /= b;

    }

    for (int i = cnt; i >= 0; i--) cout << arr[i];
    return 0;
}