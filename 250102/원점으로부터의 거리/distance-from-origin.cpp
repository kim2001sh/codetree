#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class A{
    public:
        int x, y, qjs;
        A(int x = 0, int y = 0, int qjs = 0) {
            this->x = x;
            this->y = y;
            this->qjs = qjs;
        }
};

bool cmp(A a, A b) {
    int dis_a = abs(a.x) + abs(a.y), dis_b = abs(b.x) + abs(b.y);
    if (dis_a != dis_b) return dis_a < dis_b;
    return a.qjs < b.qjs;
    
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x, y, qjs;
    A arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        qjs = i + 1;
        arr[i] = A(x, y, qjs);
    }

    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) cout << arr[i].qjs << endl;
    return 0;
}