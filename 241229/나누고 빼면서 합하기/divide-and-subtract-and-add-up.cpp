#include <iostream>
using namespace std;

void func(int a[], int m) {
    int sum = 0;
    while (m != 1) {
        sum += a[m - 1];
        if (m % 2 == 0) m /= 2;
        else m -= 1;
    }
    sum += a[0];
    cout << sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    func(a, m);
    return 0;
}