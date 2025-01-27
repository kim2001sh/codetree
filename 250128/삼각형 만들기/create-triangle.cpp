#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, max_val = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;

        cin >> x >> y;

        arr[i][0] = x;
        arr[i][1] = y;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (i == k || j == k) continue;

                if (arr[i][0] != arr[j][0] && arr[j][0] != arr[k][0] && 
                    arr[i][0] != arr[k][0]) continue;
                
                if (arr[i][1] != arr[j][1] && arr[j][1] != arr[k][1] && 
                    arr[i][1] != arr[k][1]) continue;

                if (abs((arr[i][0] * arr[j][1] + arr[j][0] * arr[k][1] + arr[k][0] * arr[i][1])
                    - (arr[j][0] * arr[i][1] + arr[k][0] * arr[j][1] + arr[i][0] * arr[k][1])) > max_val) {
                        max_val = abs((arr[i][0] * arr[j][1] + arr[j][0] * arr[k][1] + arr[k][0] * arr[i][1])
                    - (arr[j][0] * arr[i][1] + arr[k][0] * arr[j][1] + arr[i][0] * arr[k][1]));
                }

            }
        }
    }

    cout << max_val;
    return 0;
}