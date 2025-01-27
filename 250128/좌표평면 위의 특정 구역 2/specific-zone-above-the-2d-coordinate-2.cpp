#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][2] = {}, x, y, min_val = 2000000000, min_x, min_y, max_x, max_y;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;

    }

    for (int i = 0; i < n; i++) {
       min_x = min_y = 40001;
       max_x = max_y = -1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (arr[j][0] < min_x) min_x = arr[j][0];
            if (arr[j][1] < min_y) min_y = arr[j][1];
            if (arr[j][0] > max_x) max_x = arr[j][0];
            if (arr[j][1] > max_y) max_y = arr[j][1];
        }

        if ((max_x - min_x) * (max_y - min_y) < min_val) min_val = (max_x - min_x) * (max_y - min_y);
    }

    cout << min_val;
    return 0;
}