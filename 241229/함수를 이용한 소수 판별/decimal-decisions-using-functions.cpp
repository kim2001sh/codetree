#include <iostream>
using namespace std;

bool IsPrime(int k) {
    if (k == 1) return false;
    for (int i = 2; i <= k - 1; i++) {
        if (k % i == 0) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (IsPrime(i)) sum += i;
    }
    cout << sum;
    return 0;
}