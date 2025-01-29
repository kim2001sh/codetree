#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3] = {}, arr2[3] = {}, cnt = 0;
    char arr5[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr5[i][j];
            arr[i][j] = arr5[i][j] - '0';
        }
    }

    for (int i = 1; i < 9; i++) {
        for (int j = i + 1; j <= 9; j++) {
            bool flag = false;
            for (int k = 1; k <= 3; k++) {
                
        
                if (k == 1 && !flag) {
                    for (int l = 0; l < 3; l++) {
                
                        for (int m = 0; m < 3; m++) {
                            arr2[m] = arr[l][m];
                        }
                        sort(arr2, arr2 + 3);
                        if (arr2[0] == i && arr2[2] == j && (arr2[1] == i || arr2[1] == j)) {
                            cnt++;
                            
                            flag = true;
                            break;
                        }

                    }
                }
                else if (k == 2 && !flag) {
                    for (int l = 0; l < 3; l++) {
                
                        for (int m = 0; m < 3; m++) {
                            arr2[m] = arr[m][l];
                        }
                        sort(arr2, arr2 + 3);
                        if (arr2[0] == i && arr2[2] == j && (arr2[1] == i || arr2[1] == j)) {
                            cnt++;
                            
                            flag = true;
                            break;
                        }

                    }
                }
                else if (k == 3 && !flag) {
                    int arr3[3] = {arr[0][0], arr[1][1], arr[2][2]};
                    sort(arr3, arr3 + 3);
                    if (arr3[0] == i && arr3[2] == j && (arr3[1] == i || arr3[1] == j)) {
                        cnt++;
                        
                        flag = true;
                        break;
                    }

                    int arr4[3] = {arr[0][2], arr[1][1], arr[2][0]};
                    sort(arr4, arr4 + 3);
                    if (arr4[0] == i && arr4[2] == j && (arr4[1] == i || arr4[1] == j)) {
                        cnt++;
                        
                        flag = true;
                        break;
                    }

                }
                if (flag) break;


            }
        }
    }


    

    cout << cnt;

    
    return 0;
}