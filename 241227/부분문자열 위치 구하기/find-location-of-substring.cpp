#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string str;
    string str2;
    cin >> str >> str2;
    

    str.find(str2) != string::npos ? cout << str.find(str2) : cout << -1;
   


    return 0;
}