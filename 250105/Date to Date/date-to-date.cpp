#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2, cnt = 0;
    cin >> m1 >> d1 >> m2 >> d2;
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (1) {
        cnt++;
        if (m1 == m2 && d1 == d2) break;
        d1++;
        if (d1 == arr[m1]) {
            m1++;
            d1 = 0;
        }
    }
    cout << cnt;
    return 0;
}