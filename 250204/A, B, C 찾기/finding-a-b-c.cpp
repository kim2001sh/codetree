#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[7] = {};

    for (int i = 0; i < 7; i++) cin >> arr[i];

    sort(arr, arr + 7);

    int a, b, c;

    a = arr[0];
    b = arr[1];
    c = arr[6] - a - b;

    cout << a << " " << b << " " << c;

    return 0;
}