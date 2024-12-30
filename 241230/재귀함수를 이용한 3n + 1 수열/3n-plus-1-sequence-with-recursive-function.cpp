#include <iostream>
using namespace std;

int f(int n, int cnt) {
    if (n == 1) return cnt;
    if (n % 2 == 0) return f(n / 2, ++cnt);
    return f(3 * n + 1, ++cnt);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << f(n, 0);
    return 0;
}