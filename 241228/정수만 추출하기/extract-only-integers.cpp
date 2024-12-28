#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3, str4;
    str3 = "";
    str4 = "";
    cin >> str1 >> str2;
    int x, y;

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= '0' && str1[i] <= '9') str3 += str1[i];
        else break;
    }

    for (int i = 0; i < str2.length(); i++) {
        if (str2[i] >= '0' && str2[i] <= '9') str4 += str2[i];
        else break;
    }

    x = stoi(str3);
    y = stoi(str4);
    cout << x + y;
    return 0;
}