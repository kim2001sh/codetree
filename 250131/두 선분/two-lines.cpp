#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4] = {};
    
    for (int i = 0; i < 4; i++) cin >> arr[i];

    if (arr[1] < arr[2] || arr[3] < arr[0]) cout << "nonintersecting";
    else cout << "intersecting";
    return 0;
}