#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    int len, cnt;
    len = cnt = 0;
    

    for (int i = 0; i < n; i++) {
        cin >> str[i];
        len += str[i].length();
        if (str[i][0] == 'a') cnt++;
    }

    cout << len << " " << cnt;


    return 0;
}