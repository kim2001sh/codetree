#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2, cnt = 0, cntweek = 0;
    string x;
    string arr[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    int dayarr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cin >> m1 >> d1 >> m2 >> d2 >> x;
    if (m1 == m2 && d1 == d2) {
        if (x == "Mon") cout << 1;
        else cout << 0;
        return 0;
    }
    while (1) {
        if (x == arr[cnt]) cntweek++;
        if (m1 == m2 && d1 == d2) break;
        d1++;
        if (d1 > dayarr[m1]) {
            d1 = 1;
            m1++;
        }
        cnt++;
        if (cnt == 7) cnt = 0;

    }
    cout << cntweek;

    return 0;
}