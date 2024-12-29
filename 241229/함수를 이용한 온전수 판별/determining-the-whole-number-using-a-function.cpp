#include <iostream>
using namespace std;

bool onjun(int x) {
    if (x % 2 == 0) return false;
    if (x % 10 == 5) return false;
    if (x % 3 == 0 && x % 9 != 0) return false;
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (onjun(i)) cnt++;
    }
    cout << cnt;
    return 0;
}