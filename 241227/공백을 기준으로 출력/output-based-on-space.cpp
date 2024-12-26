#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    for (int j = 0; j < 2; j++) {
        getline(cin, str);


        for (int i = 0; i < str.length(); i++) {
            if (int(str[i]) != 32) cout << str[i];
        
        }
    }
    

   

    

    return 0;
}