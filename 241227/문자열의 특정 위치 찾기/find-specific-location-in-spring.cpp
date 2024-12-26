#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string str;
    char x;
    cin >> str >> x;
    

    str.find(x) != string::npos ? cout << str.find(x) : cout << "No" << " ";
   


    return 0;
}