#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    string str2 = "";
    

    for (int i = 0; i < n; i++) {
        cin >> str[i];
        str2 += str[i];
    }
    

    for (int i = 0; i < str2.length(); i++) {
        cout << str2[i];
        if ((i % 5) == 4) cout << endl;
    }
    return 0;
}