#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, x = 0, cnt = 0, arr[30];
    string n;
    cin >> a >> b >> n;

    for (int i = 0; i < n.length(); i++) x = x * a + n[i] - '0';
    if (x == 0) {
        cout << 0;
        return 0;
    }

    while (1) {
        if (x < b) {
            arr[cnt] = x;
            break;
        }
        arr[cnt++] = x % b;
        x /= b;
    }

    for (int i = cnt; i >= 0; i--) cout << arr[i];

    return 0;
}