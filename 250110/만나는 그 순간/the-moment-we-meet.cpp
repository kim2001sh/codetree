#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, arra[1000000], arrb[1000000], t, a = 0, b = 0, total_t = 0;
    char d;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> d >> t;
        if (d == 'L') {
            for (int j = 0; j < t; j++) {
                arra[j + total_t] = --a;
            }
        }
        else {
            for (int j = 0; j < t; j++) {
                arra[j + total_t] = ++a;
            }
        }
        total_t += t;

    }
    total_t = 0;

    for (int i = 0; i < m; i++) {
        cin >> d >> t;
        if (d == 'L') {
            for (int j = 0; j < t; j++) {
                arrb[j + total_t] = --b;
            }
        }
        else {
            for (int j = 0; j < t; j++) {
                arrb[j + total_t] = ++b;
            }
        }
        total_t += t;

    }
    bool flag = false;
    for (int i = 1; i < total_t; i++) {
        if (arra[i] == arrb[i]) {
            cout << i + 1;
            flag = true;
            break;
        }
    }

    if (!flag) cout << -1;

    return 0;
}