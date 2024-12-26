#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool flag1 = false, flag2 = false;
    string str;
    cin >> str;
    

    str.find("ee") != string::npos ? cout << "Yes" << " " : cout << "No" << " ";
    str.find("ab") != string::npos ? cout << "Yes" : cout << "No";


    return 0;
}