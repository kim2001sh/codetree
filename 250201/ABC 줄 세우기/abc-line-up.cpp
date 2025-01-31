#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[26] = {}, cnt = 0;
    char x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x - 65;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                cnt++;
                int tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    cout << cnt;


    return 0;
}