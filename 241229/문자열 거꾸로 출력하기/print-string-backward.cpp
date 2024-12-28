#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    string a, b;

    while (1) {
        b = "";
        cin >> a;
        if (a == "END") break;
        for (int i = 0; i < a.length(); i++) b += a[a.length() - 1 - i];
        cout << b << endl;
    }
    return 0;
}