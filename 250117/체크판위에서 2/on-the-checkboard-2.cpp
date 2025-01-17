#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    char arr[15][15];
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    // 첫 번째 점 (출발점)
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            // 두 번째 점 (첫 점프)
            for (int k = i + 1; k < r - 2; k++) {
                for (int l = j + 1; l < c - 2; l++) {
                    if (arr[i][j] == arr[k][l]) continue; // 색이 같으면 패스
                    
                    // 세 번째 점 (두 번째 점프)
                    for (int m = k + 1; m < r - 1; m++) {
                        for (int n = l + 1; n < c - 1; n++) {
                            if (arr[k][l] == arr[m][n]) continue; // 색이 같으면 패스
                            
                            // 네 번째 점 (세 번째 점프, 도착점)
                            int o = r - 1, p = c - 1;
                            if (arr[m][n] != arr[o][p]) { // 마지막 색도 다를 때만 카운트 증가
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}
