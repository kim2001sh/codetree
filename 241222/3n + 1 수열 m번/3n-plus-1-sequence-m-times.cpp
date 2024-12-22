#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0, m, n;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> n;
        while (n != 1) {
            if (n % 2 == 1) {
                cnt += 1;
                n *= 3;
                n += 1;

            }
            else {
                cnt += 1;
                n /= 2;
            }

        }


        cout << cnt;
        
        
    }
    return 0;
}