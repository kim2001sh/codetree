#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, max_val = 0;

    cin >> a >> b >> c;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            if (a * i + b * j <= c && a * i + b * j > max_val) max_val = a * i + b * j;
        }
    }

    cout << max_val;
    
    return 0;
}