#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, c, g, h, min_c = 1 << 30, max_h = -1, max_val = 0, arr[1000][2] = {}, sum;

    cin >> n >> c >> g >> h;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        if (arr[i][0] < min_c) min_c = arr[i][0];
        if (arr[i][1] > max_h) max_h = arr[i][1];
    }

    for (int i = min_c; i <= max_h; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            if (i < arr[j][0]) sum += c;
            else if (i > arr[j][1]) sum += h;
            else sum += g;
        }
        if (sum > max_val) max_val = sum;
    }

    cout << max_val;
    return 0;
}