#include <iostream>
using namespace std;
bool code(int n) {
    
    if (n % 2 == 0 && (n / 10 + n % 10) % 5 == 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    code(n) ? cout << "Yes" : cout << "No";
    return 0;
}