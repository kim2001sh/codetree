#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, even_cnt = 0, odd_cnt, arr[1000] = {}, cnt = 0;
    bool even = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even_cnt++;
    }

    odd_cnt = n - even_cnt;


    while (odd_cnt != 0 || even_cnt != 0) {
        if (even) {
            if (even_cnt > odd_cnt) {
                even_cnt = odd_cnt;
                cnt++;
                even = false;
            }
            else if (even_cnt == odd_cnt) {
                even_cnt -= 1;
                cnt++;
                even = false;
            }
            else {
                if (odd_cnt >= 2) {
                    cnt++;
                    odd_cnt -= 2;
                    even = false;
                }
                else {
                    cnt--;
                    break;
                }

            }
        }
        else {
            if (even_cnt > odd_cnt) {
                even_cnt = odd_cnt;
                odd_cnt -= 1;
                cnt++;
                even = true;
            }
            else if (even_cnt == odd_cnt) {
                odd_cnt -= 1;
                cnt++;
                even = true;
            }
            else {
                odd_cnt -= 1;
                cnt++;
                even = true;
            }

        }
    }

    cout << cnt;
    


    return 0;
}