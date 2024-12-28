#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int sum = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += int(str[i]) - 48;
        }
    }
    cout << sum;
    return 0;
}