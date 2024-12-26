#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int min_val, max_val;
    
    cin >> str;
    min_val = max_val = str.length();

    for (int i = 0; i < 2; i++) {
        cin >> str;
        if (str.length() > max_val) max_val = str.length();
        else if (str.length() < min_val) min_val = str.length();
    }

    cout << max_val - min_val;

    return 0;
}