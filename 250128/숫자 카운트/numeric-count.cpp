#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    string arr[1000] = {};

    cin >> n;

    for (int i = 100; i <= 999; i++) {
        string s = to_string(i);
        if (s[0] == '0' || s[1] == '0' || s[2] == '0') continue;
        if (s[0] == s[1] || s[0] == s[2] || s[1] == s[2]) continue;
        arr[cnt++] = s;
    }

    for (int i = 0; i < n; i++) {
        string query;
        int anscnt1, anscnt2;
        cin >> query >> anscnt1 >> anscnt2;
        
        for (int j = 0; j < 1000; j++) {
            int cnt1 = 0, cnt2 = 0;
            if (arr[j] == "") continue;
            for (int k = 0; k < 3; k++) {
                if (query[k] == arr[j][k]) cnt1++;
            }
            for (int l = 0; l < 3; l++) {
                for (int m = 0; m < 3; m++) {
                    if (l != m && query[l] == arr[j][m]) cnt2++;
                }
            }
            if (!(cnt1 == anscnt1 && cnt2 == anscnt2)) {
                arr[j] = "";
                cnt--;
            }

        }
    }

    cout << cnt;

    
    return 0;
}