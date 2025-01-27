#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        arr[i][0] = x1;
        arr[i][1] = x2;
    }

    for (int i = 0; i < n; i++) { //해당 선 
        bool flag = true;
        for (int j = 0; j < n; j++) { //다른 선
            if (i == j) continue;
            if ((arr[j][0] - arr[i][0]) * (arr[j][1] - arr[i][1]) < 0) {
                flag = false;
                break;
            }
        }
        if (flag) cnt++;
    }

    cout << cnt;

    return 0;
}