#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[199] = {}, x1, x2;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = x1 + 100; j < x2 + 100; j++) arr[j] += 1;
    }

    int max = arr[0];

    for (int i = 1; i < 200; i++) {
        if (arr[i] > max) max = arr[i];
    }

    cout << max; 
    return 0;
}