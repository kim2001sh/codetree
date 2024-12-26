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
    

    cout << str2;
    return 0;
}