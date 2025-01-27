#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, location, cntg, cnth, max_val = -1;
    char arr[101] = {}, x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> location >> x;
        arr[location] = x;
    }

    for (int i = 0; i < 101; i++) { //사진 크기
        for (int j = 0; j < 101 - i; j++) { //시작점
            cntg = 0;
            cnth = 0;
            for (int k = 0; k <= i; k++) {
                if (arr[j + k] == 'G') cntg++;
                else if (arr[j + k] == 'H') cnth++;
            }
            if (arr[j] != '\0' && arr[j + i] != '\0' && (cntg == cnth && cntg != 0 || cntg == 0 && cnth != 0 || cntg != 0 && cnth == 0)) {
                max_val = i;
                break;
            }

        }
    }

    cout << max_val;
    return 0;
}