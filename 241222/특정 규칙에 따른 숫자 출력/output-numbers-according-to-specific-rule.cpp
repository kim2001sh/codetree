#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) {
                cout << cnt << " ";
                cnt++;
                if (cnt == 10) cnt = 1;

            }
            else cout << "  ";
            

        }
        cout << endl;
    }
    return 0;
}