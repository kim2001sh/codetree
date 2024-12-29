#include <iostream>
using namespace std;
int code(int a, int b, int c) {
    
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        int tmp = a;
        a = c;
        c = tmp;
    }
    return a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int i, j, k;
    cin >> i >> j >> k;
    cout << code(i, j, k);
    return 0;
}