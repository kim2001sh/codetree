#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string str;
    string str2;
    cin >> str >> str2;
    int cnt = 0;
    

    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str2[0] && str[i + 1] == str2[1]) cnt++;
    }

    cout << cnt;
   


    return 0;
}