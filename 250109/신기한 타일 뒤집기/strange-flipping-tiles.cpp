#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string arr[220000];
    int x = 110000, dx, n;
    char c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dx >> c;
        if (c == 'L') {
            for (int j = 0; j < dx; j++) {
                arr[x] = "W";
                x--;
            }
            x++;
        }
        else {
            for (int j = 0; j < dx; j++) {
                arr[x] = "B";
                x++;
            }
            x--;
        }
    }

    int cntw = 0, cntb= 0;

    for (int i = 0; i < 220000; i++) {
        if (arr[i] == "W") cntw++;
        else if (arr[i] == "B") cntb++;
    }

    cout << cntw << " " << cntb;
    return 0;
}