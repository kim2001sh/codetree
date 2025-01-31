#include <iostream>
#include <algorithm>
using namespace std;

class A {
    public:
        int p, b, pb, spb, yet;

        A (int p = 0, int b = 0, int pb = 0, int spb = 0, int yet = 0) {
            this->p = p;
            this->b = b;
            this->pb = pb;
            this->spb = spb;
            this->yet = yet;
        }
};

bool cmp1(A a, A b) {
    if (a.pb < b.pb) return true;
    return false;
}

bool cmp2(A a, A b) {
    if (a.spb < b.spb) return true;
    return false;
}

int main() {
    // Please write your code here.
    int n, b, cnt = 0;
    A arr[1000] = {}; //가격 배송비 가격+배송비 할인가격+배송비

    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        int q, w, e, r;
        
        cin >> q >> w;
        e = q + w;
        r = q / 2 + w;
        arr[i] = A(q, w, e, r, 0);
    }

    sort(arr, arr + n, cmp1);

    int c = b;
    for (int i = 0; i < n; i++) {
        if (c >= arr[i].pb) {
            cnt++;
            c -= arr[i].pb;
            arr[i].yet = 1;
        }
        
    }
    sort(arr, arr + n, cmp2);

    for (int i = 0; i < n; i++) {
        if (c >= arr[i].spb && arr[i].yet == 0) {
            cnt++;
            break;
        }
    }

    cout << cnt;

    


    return 0;
}