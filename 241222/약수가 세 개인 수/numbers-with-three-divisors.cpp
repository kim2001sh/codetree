#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s, e, sum, cnt = 0;
    cin >> s >> e;
    for (int i = s; i <= e; i++) {
        sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) sum += 1;
        }
        if (sum == 3) cnt += 1;
    }

    cout << cnt;

    return 0;
}