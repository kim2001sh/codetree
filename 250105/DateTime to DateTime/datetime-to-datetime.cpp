#include <iostream>
using namespace std;

void tlfgod(int a, int b, int c) {
    if (a * 24 * 60 + b * 60 + c < 11 * 24 * 60 + 11 * 60 + 11) {
        cout << -1;
        return;
    }
    cout << (a - 11) * 24 * 60 + (b - 11) * 60 + (c - 11);
    return;

}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    tlfgod(a, b, c);
    
    return 0;
}