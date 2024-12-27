#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, str2;
    int q, x;
    cin >> str >> q;

    for (int i = 0; i < q; i++) {
        cin >> x;
        if (x == 1) {
            
            str = str.substr(1, str.length() - 1) + str[0];
            cout << str << endl;
        }
        else if (x == 2) {
           
            str = str[str.length() - 1] + str.substr(0, str.length() - 1);
            cout << str << endl;
        }
        else {
            str2 = "";
            for (int j = 0; j < str.length(); j++) {
                str2 += str[str.length() - j - 1];
            }
            str = str2;
            cout << str << endl;

        }
    }
    

    
    return 0;
}