#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arra[1000000], arrb[1000000], n, m, v, t, total_t = 0, cnt = 0, x = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            arra[total_t + j] = x + v;
            x += v;        
        }
        
        total_t += t;        
    }



    x = total_t = 0;

    for (int i = 0; i < m; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            arrb[total_t + j] = x + v;
            x += v;        
        }
    
        total_t += t;        
    }
    
    char a[1000000];
    char k = '0';
    

    for (int i = 0; i < total_t; i++) {
        if (arra[i] == arrb[i]) a[i] = 'D';
        else if (arra[i] > arrb[i]) {
            a[i] = 'A';
            if (k == '0') k = a[i];
            else if (k != a[i]) {
                cnt++;
                k = a[i];
            }
        }
        else {
            a[i] = 'B';
            if (k == '0') k = a[i];
            else if (k != a[i]) {
                cnt++;
                k = a[i];
            }
        }
    }

   
    

    cout << cnt;


    return 0;
}