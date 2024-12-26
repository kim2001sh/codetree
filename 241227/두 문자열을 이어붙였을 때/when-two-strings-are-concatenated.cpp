#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str2;
    string str3;
    string str4;
    
    cin >> str >> str2;
    str3 = "";
    str3 += str;
    str3 += str2;
    str4 = "";
    str4 += str2;
    str4 += str;

    str3 == str4 ? cout << "true" : cout << "false";
    return 0;
}