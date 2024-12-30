#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s[100], s1[100], t;
    int n, k, cnt = 0;
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i].length() >= t.length() && s[i].substr(0, 2) == t) s1[cnt++] = s[i];
    }
    sort(s1, s1 + cnt);

    cout << s1[k - 1];
    

    
    return 0;
}