#include <iostream>
using namespace std;
bool dusthr(int a[], int b[], int n1, int n2) {
    for (int i = 0; i < n1 - n2 + 1; i++) {
        bool flag = true;
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                flag = false;
                break;
            }


        }
        if (flag) return true;

    }
    return false;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    dusthr(a, b, n1, n2) ? cout << "Yes" : cout << "No";
    
    return 0;
}