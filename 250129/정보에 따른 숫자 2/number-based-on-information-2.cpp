#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int t, a, b, d1, d2, location, cnt = 0;
    char arr[1001] = {}, c;

    cin >> t >> a >> b;

    for (int i = 0; i < t; i++) {
        cin >> c >> location;
        arr[location] = c;
    }

    for (int i = a; i <= b; i++) {
        for (int j = 0;; j++) {
            if (i + j >= 0 && i + j < 1001 && arr[i + j] == 'S') {
                cnt++;
                break;
            }
            else if (i - j >= 0 && i - j < 1001 && arr[i - j] == 'S') {
                cnt++;
                break;
            }

            else if (i + j >= 0 && i + j < 1001 && arr[i + j] == 'N') {
                
                break;
            }
            else if (i - j >= 0 && i - j < 1001 && arr[i - j] == 'N') {
                
                break;
            }

        }
    }

    cout << cnt;
    return 0;
}