#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    cout << str << endl;
    for (int i = 0; i < str.length(); i++) {
        str = str[str.length() - 1] + str.substr(0, str.length() - 1);
        cout << str << endl;
    }

    
    return 0;
}