#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int dir = 3, x = 0, y = 0, n, dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') dir = (dir + 3) % 4;
        else if (s[i] == 'R') dir = (dir + 1) % 4;
        else {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;

    return 0;
}