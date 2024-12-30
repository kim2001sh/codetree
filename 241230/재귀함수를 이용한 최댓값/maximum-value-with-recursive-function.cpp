#include <iostream>
using namespace std;

int f(int n, int max) {
    if (n == 0) return max;
    int x;
    cin >> x;
    if (x > max) return f(n - 1, x);
    return f(n - 1, max);

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << f(n, 0);
    return 0;
}