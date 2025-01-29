#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[20][2] = {};

    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];

    bool flag = false;

    for (int i = 0; i <= 3; i++) { //가로줄 개수
        for (int x = 0; x <= 10; x++) {
            for (int y = 0; y <= 10; y++) {
                for (int z = 0; z <= 10; z++) {
                    bool flag2 = true;
                    for (int a = 0; a < n; a++) {
                        if (i == 0) {
                            if (arr[a][0] != x && arr[a][0] != y && arr[a][0] != z) flag2 = false; 
                        }
                        else if (i == 1) {
                            if (arr[a][1] != x && arr[a][0] != y && arr[a][0] != z) flag2 = false;
                        }
                        else if (i == 2) {
                            if (arr[a][1] != x && arr[a][1] != y && arr[a][0] != z) flag2 = false;
                        }
                        else {
                            if (arr[a][1] != x && arr[a][1] != y && arr[a][1] != z) flag2 = false;
                        }
                    }
                    if (flag2) flag = true;
                }
            }
        }
    }

    if (flag) cout << 1;
    else cout << 0;
    return 0;
}