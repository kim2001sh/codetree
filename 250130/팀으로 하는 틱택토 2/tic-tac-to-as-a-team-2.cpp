#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3] = {}, arr2[3] = {}, cnt = 0;

    for (int i = 0; i < 3; i++) cin >> arr2[i];

    for (int i = 0; i < 3; i++) {
        int x = 100;
        for (int j = 0; j < 3; j++) {
            
            arr[i][j] = arr2[i] / x;
            arr2[i] %= x;
            x /= 10;
            
            
            
        }
    

    }

    for (int k = 1; k <= 3; k++) {
        
        if (k == 1) {
            for (int l = 0; l < 3; l++) {
                
                for (int m = 0; m < 3; m++) {
                    arr2[m] = arr[l][m];
                }
                sort(arr2, arr2 + 3);
                if (arr2[0] != arr2[2] && (arr2[0] == arr2[1] || arr2[1] == arr2[2])) cnt++;

            }
        }
        else if (k == 2) {
            for (int l = 0; l < 3; l++) {
                
                for (int m = 0; m < 3; m++) {
                    arr2[m] = arr[m][l];
                }
                sort(arr2, arr2 + 3);
                if (arr2[0] != arr2[2] && (arr2[0] == arr2[1] || arr2[1] == arr2[2])) cnt++;

            }
        }
        else {
            int arr3[3] = {arr[0][0], arr[1][1], arr[2][2]};
            sort(arr3, arr3 + 3);
            if (arr3[0] != arr3[2] && (arr3[0] == arr3[1] || arr3[1] == arr3[2])) cnt++;
            int arr4[3] = {arr[0][2], arr[1][1], arr[2][0]};
            sort(arr4, arr4 + 3);
            if (arr4[0] != arr4[2] && (arr4[0] == arr4[1] || arr4[1] == arr4[2])) cnt++;

        }


    }

    cout << cnt;

    
    return 0;
}