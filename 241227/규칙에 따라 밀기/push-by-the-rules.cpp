#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, str2;

    cin >> str >> str2;

    for (int i = 0; i < str2.length(); i++) {
        
        if (str2[i] == 'L') {
            
            str = str.substr(1, str.length() - 1) + str[0];
            
        }
        else if (str2[i] == 'R') {
           
            str = str[str.length() - 1] + str.substr(0, str.length() - 1);
            
        }
        
    }

    cout << str;
    

    
    return 0;
}