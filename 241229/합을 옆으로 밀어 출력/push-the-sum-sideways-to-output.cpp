#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, n, x;
    cin >> n;
    string str;
    

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    str = to_string(sum);
    str = str.substr(1, str.length() - 1) + str[0];

    cout << str;

    return 0;
}