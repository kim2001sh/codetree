#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    string str = to_string(sum);

    int cnt = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') cnt++;
    }

    cout << cnt;

    return 0;
}