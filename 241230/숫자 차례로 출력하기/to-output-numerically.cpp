#include <iostream>
using namespace std;
void add(int n) {
    if (n == 0) return;
    add(n - 1);
    cout << n << " ";
}

void sub(int n) {
    if (n == 0) return;
    cout << n << " ";
    sub(n - 1);
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    add(n);
    cout << endl;
    sub(n);
    return 0;
}