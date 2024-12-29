#include <iostream>
using namespace std;

void func(int n) {
    if (n == 0) return;
    func(n-1);

    cout << "HelloWorld" << endl;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    func(n);
    return 0;
}