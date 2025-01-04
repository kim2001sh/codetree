#include <iostream>
#include <algorithm>

class a{
    public:
        int x, qjs;
        a(int x = 0, int qjs = 0) {
            this->x = x;
            this->qjs = qjs;
        }
};

bool cmp(a x, a y) {
    if (x.x == y.x) return x.qjs < y.qjs;
    return x.x < y.x;
}

using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n;
    a arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> k;
        arr[i] = a(k, i);
    }

    sort(arr, arr + n, cmp);
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j].qjs == i) {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    return 0;
}