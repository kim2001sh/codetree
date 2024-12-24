#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6] = { 'L', 'E', 'B', 'R', 'O', 'S'};
    int idx = -1;
    char a;
    cin >> a;

    for (int i = 0; i < 6; i++) {
        if (a == arr[i]) {
            idx = i;
            break;
        }

    }

    if (idx == -1) cout << "None";
    else cout << idx;



    return 0;
}