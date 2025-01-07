#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, x1, x2, arr[100] = {};

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = x1 - 1; j <= x2 - 1; j++) {
            arr[j] += 1;
        }
    }

    int max = arr[0];

    for (int i = 1; i < 100; i++) {
        if (arr[i] > max) max = arr[i];
    }

    cout << max;
    return 0;
}