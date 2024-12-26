#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int cnt = 0;
    string runstr = "";
    char x;

    for (int i = 0; str[i] != '\0'; i++) {
        if (cnt == 0) {
            cnt++;
            x = str[i];
            runstr += x;
        }
        else if (str[i] == x) cnt++;
        else {
            runstr += to_string(cnt);
            cnt = 1;
            x = str[i];
            runstr += x;
        }

    }
    
    runstr += to_string(cnt);
    
    cout << runstr.length() << endl << runstr;

    return 0;
}