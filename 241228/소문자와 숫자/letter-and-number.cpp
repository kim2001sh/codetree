#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    

    for (int i = 0; i < str.length(); i++) {
        if (int(str[i]) >= 49 && int(str[i]) <= 57 || int(str[i]) >= int('a') && int(str[i]) <= int('z') || int(str[i]) >= int('A') && int(str[i]) <= int('Z')) {
            
            cout << char(tolower(str[i]));
        }
    }        

    

    
    return 0;
}