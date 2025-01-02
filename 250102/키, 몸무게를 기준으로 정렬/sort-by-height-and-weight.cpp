#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class A{
    public:
        string s;
        int zl, aha;
        A(string s = "", int zl = 0, int aha = 0) {
            this->s = s;
            this->zl = zl;
            this->aha = aha;
        }
};

bool cmp(A x, A y) {
    if (x.zl != y.zl) return x.zl < y.zl;
    return x.aha > y.aha;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, zl, aha;
    string s;

    cin >> n;
    A arr[10];

    for (int i = 0; i < n; i++) {
        cin >> s >> zl >> aha;
        arr[i] = A(s, zl, aha);

    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) cout << arr[i].s << " " << arr[i].zl << " " << arr[i].aha << endl;
    return 0;
}