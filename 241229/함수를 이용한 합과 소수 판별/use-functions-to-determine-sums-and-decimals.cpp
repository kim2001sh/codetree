#include <iostream>
using namespace std;

bool IsPrime(int x) {
    if (x == 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
    
}

bool sum(int x) {
    int s = 0;
    while (x != 0) {
        s += x % 10;
        x /= 10;
    }
    if (s % 2 == 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (IsPrime(i) && sum(i)) cnt++;
    }

    cout << cnt;
    return 0;
}