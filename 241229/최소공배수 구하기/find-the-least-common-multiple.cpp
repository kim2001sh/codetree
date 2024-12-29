#include <iostream>
using namespace std;
void code(int n, int m) {
    int x = m;
    if (n > m) {
        int tmp = n;
        n = m;
        m = tmp;
        
    }
    while (1) {
        if (x % n == 0 && x % m == 0) {
            cout << x;
            return;
        }
        x++;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int i, j;
    cin >> i >> j;
    code(i, j);
    return 0;
}