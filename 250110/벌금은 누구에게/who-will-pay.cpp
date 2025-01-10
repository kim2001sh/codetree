#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, k, arr[101] = {}, x;
    bool flag = false;

    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> x;
        arr[x] += 1;
        if (arr[x] >= k) {
            cout << x;
            flag = true;
            break;
        }
    }

    if (!flag) cout << -1;
    return 0;
}
