#include <iostream>
using namespace std;
int sum(int n, int cnt) {
    if (n == 1) return cnt;
    if (n % 2 == 1) return sum(n / 3, ++cnt);
    return sum(n / 2, ++cnt);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    cout << sum(n, cnt);
    return 0;
}