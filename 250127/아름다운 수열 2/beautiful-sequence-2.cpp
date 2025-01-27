#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, arra[100] = {}, arrb[100] = {}, cnt = 0;
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> arra[i];
    for (int j = 0; j < m; j++) cin >> arrb[j];

    sort(arrb, arrb + m);

    if (m > n) {
        cout << 0;
        return 0;
    }
    
    for (int i = 0; i < n - m + 1; i++) {
        int arrasort[100] = {};
        for (int j = 0; j < m; j++) {
            arrasort[j] = arra[i + j];
        }
        sort(arrasort, arrasort + m);
        bool beautiful = true;
        for (int k = 0; k < m; k++) {
            if (arrasort[k] != arrb[k]) {
                beautiful = false;
                break;
            }
        }

        if (beautiful) cnt++;
    }

    cout << cnt;
    return 0;
}