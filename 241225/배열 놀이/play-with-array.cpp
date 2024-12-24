#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q, arr[100], select, a, b;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> select;
        if (select == 1) {
            cin >> a;
            cout << arr[a - 1] << endl;
        }
        else if (select == 2) {
            cin >> b;
            int idx = -1;
            for (int j = 0; j < n; j++) {
                if (b == arr[j]) {
                    idx = j;
                    break;
                }
                
            }
            if (idx == 0) cout << 0 << endl;
            else cout << idx + 1 << endl;
        }
        else {
            cin >> a >> b;
            for (int k = a - 1; k <= b - 1; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}