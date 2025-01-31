#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, x, y, min_val, sum_val;

    cin >> a >> b >> x >> y;

    min_val = abs(a - b);
    if (abs(a - x) + abs(y - b) < min_val) min_val = abs(a - x) + abs(y - b);
    if (abs(a - y) + abs(x - b) < min_val) min_val = abs(a - y) + abs(x - b);

    cout << min_val;

    return 0;
}