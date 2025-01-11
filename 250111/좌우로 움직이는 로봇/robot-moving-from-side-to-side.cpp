#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, t, total_t = 0, x = 0, arra[1000000] = {}, arrb[1000000] = {}, cnt = 0;
    char d;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t >> d;
        if (d == 'L') {
            for (int j = 0; j < t; j++) {
                arra[total_t + j] = --x;
            }

        }
        else {
            for (int j = 0; j < t; j++) {
                arra[total_t + j] = ++x;
            }
        }
        total_t += t;
    }

    for (int i = total_t; i < 1000000; i++) arra[i] = arra[total_t - 1];

    x = total_t = 0;

    for (int i = 0; i < m; i++) {
        cin >> t >> d;
        if (d == 'L') {
            for (int j = 0; j < t; j++) {
                arrb[total_t + j] = --x;
            }

        }
        else {
            for (int j = 0; j < t; j++) {
                arrb[total_t + j] = ++x;
            }
        }
        total_t += t;
    }

    for (int i = total_t; i < 1000000; i++) arrb[i] = arrb[total_t - 1];
    

    for (int i = 1; i < 1000000; i++) {
        
        if (arra[i] == arrb[i] && arra[i - 1] != arrb[i - 1]) {
            cnt++;
         
        }

    }

    
    cout << cnt;

    return 0;
}