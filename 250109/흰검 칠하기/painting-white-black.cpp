#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string arr[300000];
    int n, x = 150000, dx;
    char c;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> dx >> c;
        if (c == 'L') {
            for (int j = 0; j < dx; j++) {
                arr[x] += "W";
                x--;
            }
            x++;
        }
        else {
            for (int j = 0; j < dx; j++) {
                arr[x] += "B";
                x++;
            }
            x--;
        }
    }

    int totalw = 0, totalb = 0, totalg = 0;

    for (int i = 0; i < 300000; i++) {
        int cntw = 0, cntb = 0;
        for (int j = 0; j < arr[i].length(); j++) {
            if (arr[i][j] == 'W') cntw++;
            else if (arr[i][j] == 'B') cntb++;
        }

        if (cntw >= 2 && cntb >= 2) totalg++;
        else if (arr[i].length() >= 1 && arr[i][arr[i].length() - 1] == 'B') totalb++;
        else if (arr[i].length() >= 1 && arr[i][arr[i].length() - 1] == 'W') totalw++;
    }

    cout << totalw << " " << totalb << " " << totalg;
    return 0;
}