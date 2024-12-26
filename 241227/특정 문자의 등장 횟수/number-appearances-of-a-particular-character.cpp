#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string str;
    int cntee = 0, cnteb = 0;
    
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == 'e' && str[i + 1] == 'e') cntee++;
        else if (str[i] == 'e' && str[i + 1] == 'b') cnteb++;

    }

    cout << cntee << " " << cnteb;
    return 0;
}