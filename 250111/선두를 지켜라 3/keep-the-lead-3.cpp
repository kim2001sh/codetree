#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, v, t, x = 0, total_t = 0, arra[1000000] = {}, arrb[1000000] = {}, com, cnt = 1;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            x += v;
            arra[total_t + j] = x;
            
        }
        total_t += t;

    }

    total_t = x = 0;

    for (int i = 0; i < m; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            x += v;
            arrb[total_t + j] = x;
            
        }
        total_t += t;

    }

    if (arra[0] == arrb[0]) com = 3;
    else if (arra[0] > arrb[0]) com = 2;
    else com = 1;

    for (int i = 1; i < total_t; i++) {
        if (arra[i] == arrb[i]  && com == 3) ;
        else if (arra[i] > arrb[i] && com == 2) ;
        else if (arra[i] < arrb[i] && com == 1) ;
        else {
            cnt++;
            if (arra[i] == arrb[i]) com = 3;
            else if (arra[i] > arrb[i]) com = 2;
            else com = 1;


        }
    }

    cout << cnt;
    return 0;
}