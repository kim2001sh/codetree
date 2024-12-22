#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 65;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)cnt;
            cnt++;
            if (cnt == 91) cnt = 65; 

        }
        cout << endl;
        
    }
    return 0;
}