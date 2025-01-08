#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[3000] = {}, x = 1500, dx;
    cin >> n;
    char c;

    for (int i = 0; i < n; i++) {
        cin >> dx >> c;
        if (c == 'L') {
            for (int j = 1; j <= dx; j++) {
                x -= 1;
                arr[x] += 1;
            }
        }
        else {
            for (int j = 1; j <= dx; j++) {
                arr[x] += 1;
                x += 1;
            }
        } 
    }

    int cnt = 0;
    for (int i = 0; i < 3000; i++) {
        if (arr[i] >= 2) cnt++;
    }

    cout << cnt;
    return 0;
}