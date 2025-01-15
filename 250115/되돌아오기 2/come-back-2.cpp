#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, dir_num = 3, cnt = 0, x = 110000, y = 110000;
    string s;

    cin >> s;

    

    for (int i = 0; i < s.length(); i++) {
        cnt++;
        if (s[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else if (s[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        }
        else {
            x += dx[dir_num];
            y += dy[dir_num];
        }

        if (x == 110000 && y == 110000) {
            cout << cnt;
            return 0;
        }
    }


    cout << -1;

    

    return 0;
}