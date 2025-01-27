#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, h, t, arr[100], cost, min_cost = 1 << 30;

    cin >> n >> h >> t;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - t + 1; i++) {
        cost = 0;
        for (int j = 0; j < t; j++) {
            cost += abs(h - arr[i + j]);

        }
        if (cost < min_cost) min_cost = cost;
    }

    cout << min_cost;
    return 0;
}