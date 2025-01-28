#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int x, y, cnt = 0;
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        int arr[10] = {};
        string s;
        s = to_string(i);
        for (int j = 0; j < s.length(); j++) arr[s[j] - '0']++;
        int a = 0, b = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == 1) a++;
            else if (arr[j] >= 2) b++;

        }
        if (a == 1 && b == 1) cnt++; 

    }

    cout << cnt;
    return 0;
}