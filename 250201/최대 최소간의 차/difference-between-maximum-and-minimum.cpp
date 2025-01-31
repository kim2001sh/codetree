#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, arr[100] = {}, min_val = 1 << 30;;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> arr[i];


    for (int i = 1; i <= 10000; i++) { //최소 
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < i) sum += abs(arr[j] - i);
            else if (arr[j] > i + k) sum += abs(arr[j] - (i + k));
        }
        if (sum < min_val) min_val = sum;
    }

    cout << min_val;

    return 0;
}