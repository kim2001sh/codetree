#include <iostream>
using namespace std;

bool InRange(int x, int y) {
    if (x >= 0 && x < 19 && y >= 0 && y < 19) return true;
    return false;
}


int main() {
    // Please write your code here.
    int arr[19][19], dx[4] = {0, 1, 1, 1}, dy[4] = {1, 1, 0, -1}, x, y, win = 0;
    

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            

            if (arr[i][j] == 0) continue;
            for (int k = 0; k < 4; k++) { //방향
                int nx = i;
                int ny = j;
                
                for (int l = 0; l < 4; l++) { //나가는 횟수
                    nx = nx + dx[k];
                    ny = ny + dy[k];
                    if (!(InRange(nx, ny) && arr[nx][ny] == arr[i][j])) break;
                    
                    

                    if (l == 3) {
                        win = arr[i][j];
                        x = i + 1 + 2 * dx[k];
                        y = j + 1 + 2 * dy[k];
                        cout << win << endl << x << " " << y;
                        return 0;
                    }
                }

                
            }
        }
    }

    cout << win;
    
    return 0;
}