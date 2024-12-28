#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string x, y;
    cin >> x >> y;
    int sum;
    string xy = x + y;
    string yx = y + x;
    sum = stoi(xy) + stoi(yx);
    cout << sum;

    return 0;
}