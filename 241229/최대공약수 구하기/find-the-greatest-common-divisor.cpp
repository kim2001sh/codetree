#include <iostream>
using namespace std;
void code(int n, int m) {
    int x = 1;
    if (n > m) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && m % i == 0) x = i;
    }
    cout << x;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int i, j;
    cin >> i >> j;
    code(i, j);
    return 0;
}