#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[1003] = {}, sum, min_sum = 1 << 30, people = 0, move;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        people += arr[i];
    }
    for (int i = 0; i < n; i++) {
        sum = 0;
        move = people;
        for (int j = i; j < n + i; j++) {
            
            move -= arr[j % n];

            if (move <= 0) break;
            sum += move;
            
        }
        if (min_sum > sum) min_sum = sum;
    }

    cout << min_sum;

    return 0;
}