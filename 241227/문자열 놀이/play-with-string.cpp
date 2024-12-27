#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;
    cin >> str >> q;
    int select, ai, bi;
    char ac, bc, tmp;

    for (int i = 0; i < q; i++) {
        cin >> select;
        if (select == 1) {
            cin >> ai >> bi;
            tmp = str[ai - 1];
            str[ai - 1] = str[bi - 1];
            str[bi - 1] = tmp;
            cout << str << endl;

        }
        else {
            cin >> ac >> bc;
            for (int j = 0; j < str.length(); j++) {
                if (str[j] == ac) str[j] = bc;

            }
            cout << str << endl;
        }
    }
    return 0;
}