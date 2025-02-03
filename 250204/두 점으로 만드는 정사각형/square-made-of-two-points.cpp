#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[8] = {};

    for (int i = 0; i < 8; i++) cin >> arr[i];
    int x = max(max(arr[2], arr[6]) - min(arr[0], arr[4]), max(arr[3], arr[7]) - min(arr[1], arr[5]));

    cout << x * x;
    return 0;
}