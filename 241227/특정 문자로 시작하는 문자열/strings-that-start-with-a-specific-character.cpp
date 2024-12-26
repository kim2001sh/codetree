#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(2);
    
    int n, sum_len = 0, cnt = 0;
    cin >> n;
    
    string str[n];


    for (int i = 0; i < n; i++) {
        cin >> str[i];
        
    }

    char x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (str[i][0] == x) {
            cnt++;
            sum_len += str[i].length();

        }
    }

    cout << cnt << " " << (float)sum_len / cnt;
    
    return 0;
}