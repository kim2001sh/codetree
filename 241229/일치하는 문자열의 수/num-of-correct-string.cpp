#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a, b;

    cin >> n >> a;
    int cnt = 0;

    for (int i = 0; i < a.length(); i++) {
        cin >> b;
        if (a == b) cnt++;
    }

    cout << cnt;
    return 0;
}