#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[101] = {}, data[10][2] = {}, n, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data[i][0] >> data[i][1];
        for (int j = data[i][0]; j <= data[i][1]; j++) arr[j]++;
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = data[i][0]; l <= data[i][1]; l++) arr[l]--;
                for (int l = data[j][0]; l <= data[j][1]; l++) arr[l]--;
                for (int l = data[k][0]; l <= data[k][1]; l++) arr[l]--;
                bool flag = true;
                for (int l = 0; l < 101; l++) {
                    if (arr[l] >= 2) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cnt++;
                for (int l = data[i][0]; l <= data[i][1]; l++) arr[l]++;
                for (int l = data[j][0]; l <= data[j][1]; l++) arr[l]++;
                for (int l = data[k][0]; l <= data[k][1]; l++) arr[l]++;
            }
        }
    }

    cout << cnt;
    return 0;
}