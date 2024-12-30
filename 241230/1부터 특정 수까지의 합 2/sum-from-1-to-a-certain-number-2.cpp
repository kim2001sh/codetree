#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}