#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 1;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            
            if (i % 2 == 0) {
                arr[n-j-1][n-i-1] = cnt++;

            }
            else {
                arr[j][n-i-1] = cnt++;
            }
            
        }

        

    }

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            
            cout << arr[i][j] << " ";
            
        }

        cout << endl;

        

    }
    return 0;
}