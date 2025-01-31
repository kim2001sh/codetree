#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int clean[101] = {}, cnt = 0, arr[4] = {};

    for (int i = 0; i < 4; i++) cin >> arr[i];

    for (int i = arr[0]; i < arr[1]; i++) clean[i]++;
    for (int i = arr[2]; i < arr[3]; i++) clean[i]++;

    for (int i = 0; i < 101; i++) {
        if (clean[i] > 0) cnt++;
    }

    cout << cnt;
    return 0;
}