#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0;
    string str;
    cin >> str;
    x += str.length();
    cin >> str;
    x += str.length();

    cout << x;
    return 0;
}