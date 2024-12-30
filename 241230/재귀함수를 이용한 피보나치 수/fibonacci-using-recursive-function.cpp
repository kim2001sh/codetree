#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}