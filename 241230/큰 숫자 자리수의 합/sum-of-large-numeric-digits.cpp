#include <iostream>
using namespace std;

int f(int x) {
    if (x < 10) return x;
    return f(x % 10) + f(x / 10); 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y, z, prod;
    cin >> x >> y >> z;
    prod = x * y * z;
    cout << f(prod);
    return 0;
}