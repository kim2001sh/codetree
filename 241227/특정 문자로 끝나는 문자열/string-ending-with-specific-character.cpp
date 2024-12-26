#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string str[10];
    bool flag = false;

    for (int i = 0; i < 10; i++) {
        cin >> str[i];
        
    }

    char x;
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (str[i].back() == x) {
            flag = true;
            cout << str[i] << endl;

        }
    }

    if (!flag) cout << "None";
    
    return 0;
}