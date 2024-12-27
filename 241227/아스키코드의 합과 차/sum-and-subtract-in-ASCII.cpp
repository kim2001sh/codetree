#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if ((int)b > (int)a) {
        char tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << (int)a + (int)b << " " << (int)a - (int)b;
    return 0;
}