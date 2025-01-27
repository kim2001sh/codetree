#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, employee[100][2] = {}, cnt = 0, time[1000] = {}, max_val = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        employee[i][0] = a;
        employee[i][1] = b;
        for (int j = a; j < b; j++) time[j]++;
    } 

    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = employee[i][0]; j < employee[i][1]; j++) time[j]--;
        for (int j = 0; j < 1000; j++) {
            if (time[j] != 0) cnt++;
        }
        if (cnt > max_val) max_val = cnt;
        for (int j = employee[i][0]; j < employee[i][1]; j++) time[j]++;

        
    }

    cout << max_val;
    return 0;
}