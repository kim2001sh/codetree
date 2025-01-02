#include <iostream>
#include <algorithm>

using namespace std;

class A{
    public:
        int zl, aha, qjs;
        A(int zl = 0, int aha = 0, int qjs = 0) {
            this->zl = zl;
            this->aha = aha;
            this->qjs = qjs;
        }
};

bool cmp(A x, A y) {
    if (x.zl != y.zl) return x.zl < y.zl;
    return x.aha > y.aha;
}

int main() {
    // Please write your code here.
    int n, h, w;
    A arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h >> w;
        arr[i] = A(h, w, i + 1);
    }

    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) cout << arr[i].zl << " " << arr[i].aha << " " << arr[i].qjs << endl;
    return 0;
}