#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    string str1, str2;
    cin >> n1 >> n2;
    bool flag = false;

    getline(cin, str1);
    getline(cin, str2);

    if (str1.length() < str2.length()) {
        cout << "No";
        return 0;
    }
    
    for (int i = 0; i < n1 - str2.length() + 1; i++) {
        if (str1.substr(i, str2.length()) == str2) {
            flag = true;
            break;
        }
    }

    flag ? cout << "Yes" : cout << "No";

    
    return 0;
}