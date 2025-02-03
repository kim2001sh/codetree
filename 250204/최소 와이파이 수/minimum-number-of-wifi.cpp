#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100] = {}, m, cnt = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cnt++;
            i += 2 * m;
        }
    } 

    cout << cnt;
    return 0;
}