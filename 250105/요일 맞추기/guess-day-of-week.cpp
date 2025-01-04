#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2, cnt = 0;
    cin >> m1 >> d1 >> m2 >> d2;
    string arr[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    int dayarr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (m2 - m1 > 0 || m1 == m2 && d1 <= d2) {
        while (1) {
            if (m1 == m2 && d1 == d2) break;
            cnt++;
            d1++;
            if (d1 > dayarr[m1]) {
                d1 = 1;
                m1++;
            }
        }


    }

    else {
        while (1) {
            if (m1 == m2 && d1 == d2) break;
            cnt--;
            d1--;
            if (d1 == 0) {
                m1--;
                d1 = dayarr[m1];

            }
        }
    }

    if (cnt >= 0) cnt %= 7;
    else {
        while (1) {
            cnt += 7;
            if (cnt >= 0) break;
        }
    }
    cout << arr[cnt];

    return 0;
}