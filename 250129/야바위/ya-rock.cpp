#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100][3], max_score = 0;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    for (int i = 0; i < 3; i++) {
        int rock[3] = {}, score = 0;
        rock[i] = 1;
        
        for (int j = 0; j < n; j++) {
            if (rock[arr[j][0] - 1] + rock[arr[j][1] - 1] == 0) ;
            else {
                rock[arr[j][0] - 1] += 1;
                rock[arr[j][0] - 1] %= 2;
                rock[arr[j][1] - 1] += 1;
                rock[arr[j][1] - 1] %= 2;

            }
            if (rock[arr[j][2] - 1] == 1) score++;
        }

        if (score > max_score) max_score = score;
    }

    cout << max_score;
    return 0;
}