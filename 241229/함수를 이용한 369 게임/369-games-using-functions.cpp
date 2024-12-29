#include <iostream>
using namespace std;

bool exist369(int k) {
    while (k != 0) {
        if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9) return true;
        k /= 10;
    }
    return false;
}


bool code(int k) {
    
    
    return k % 3 == 0 || exist369(k);
}



int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (code(i)) cnt++;
    }
    cout << cnt;
    return 0;
}