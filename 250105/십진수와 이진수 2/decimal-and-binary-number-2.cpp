#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int num = 0, arr[20], cnt = 0;
    for (int i = 0; i < s.length(); i++) num = num * 2 + s[i] - '0';
    num *= 17;
    
    while (1) {
        if (num == 1) {
            arr[cnt] = 1;
            break;
        }
        arr[cnt++] = num % 2;
        num /= 2;
    }

    for (int i = cnt; i >= 0; i--) cout << arr[i];
    return 0;
}