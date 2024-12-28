#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt = 1;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < m; i++) {
        int y = 0;
        int x = i;
        while (y <= n - 1 && x >= 0) {
            arr[y][x] = cnt++;
            x--;
            y++;


        }
    }

    for (int i = 1; i < n; i++) {
        int x = m - 1;
        int y = i;
        while (y <= n - 1 && x >= 0) {
            arr[y][x] = cnt++;
            x--;
            y++;
        }
    }

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < m; j++) {
            
            cout << arr[i][j] << " ";
            
        }
        cout << endl;

        

    }
    return 0;
}