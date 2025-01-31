#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[8] = {};

    for (int i = 0; i < 8; i++) cin >> arr[i];

    if (arr[2] < arr[4] || arr[6] < arr[0] || arr[3] < arr[5] || arr[7] < arr[1]) cout << "nonoverlapping";
    else cout << "overlapping";
    return 0;
}